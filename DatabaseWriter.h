#include <stdio.h>
#include "IWriter.h"

class DatabaseWriter: public IWriter{
public:
	DatabaseWriter();
	~DatabaseWriter();
	void write(char *content);
};
