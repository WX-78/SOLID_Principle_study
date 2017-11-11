#include <stdio.h>

namespace badDesign{
enum SourceContent{eRFile, eRData};
enum DestContent{eWFile, eWData};

class EncryptService{
public:
	EncryptService();
	~EncryptService();
	void encrypt(SourceContent s, DestContent d);
private:
	char *readFromFile();
	char *readFromDatabase();
	void writeToDatabase(char *content);
	void writeToFile(char *content);
	char *doEncrypt(char *content);
};
}

namespace goodDesign{
	#include "IReader.h"
	#include "IWriter.h"
	
	class EncryptService{
	public:
		EncryptService();
		~EncryptService();
		void encrypt(IReader *r, IWriter *w);
	
	private:
		char *doEncrypt(char *content);
	};
}

