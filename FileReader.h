#include <stdio.h>
#include "IReader.h"

class FileReader : public IReader{
public:
	FileReader();
	~FileReader();
	char *read();
};
