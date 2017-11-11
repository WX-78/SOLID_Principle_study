compile:
	g++ dip.cpp EncryptService.cpp EncryptService.h DatabaseWriter.cpp \
	DatabaseWriter.h FileReader.cpp FileReader.h IReader.cpp IReader.h IWriter.cpp IWriter.h
run:
	./a.out
