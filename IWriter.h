class IWriter{
public:
	IWriter();
	~IWriter();
	virtual void write(char *content) = 0;

};
