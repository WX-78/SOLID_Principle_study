#include "EncryptService.h"
#include "FileReader.h"
#include "DatabaseWriter.h"


using namespace goodDesign;
int main(){
	
	EncryptService es;
	es.encrypt(new FileReader(), new DatabaseWriter()); 
	return 0;
}
