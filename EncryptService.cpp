#include "EncryptService.h"

namespace badDesign{
EncryptService::EncryptService(){

}

EncryptService::~EncryptService(){

}

char *EncryptService::readFromFile(){
	printf("Data is read from file\n");
//	return NULL;
}
char *EncryptService::readFromDatabase(){
	printf("Data is read from database\n");
//	return NULL;
}

void EncryptService::writeToDatabase(char *content){
	printf("Data is read from database\n");
//	return NULL;
}

void EncryptService::writeToFile(char *content){
	printf("Data is saved to file\n");
//	return NULL;
}

char *EncryptService::doEncrypt(char *content){
	return NULL;
}

/*
 * This looks fine. But when I change the type or add more 
 * type if input data --> we have to change code --> violates DIP.
 * This code depends on the detail.
 *
 *
 *
*/

void EncryptService::encrypt(SourceContent s, DestContent d){
	char *content = NULL;
	switch(s){
		case eRData:
			content = readFromFile();
			break;
		case eRFile:
			content = readFromFile();
			break;
	}
	char *encryptContent = doEncrypt(content);
	switch(d){
		case eWData:
			writeToDatabase(encryptContent);
			break;
		case eWFile:
			writeToFile(encryptContent);
			break;
	}
}
}

namespace goodDesign{
	EncryptService::EncryptService(){
	
	}
	
	EncryptService::~EncryptService(){
	
	}
	
	void EncryptService::encrypt(IReader *r, IWriter *w){
		char *content = r -> read();
		char *encryptContent = doEncrypt(content);
		w -> write(encryptContent);
	}
	
	
	char *EncryptService::doEncrypt(char *content){
	
	}
}

