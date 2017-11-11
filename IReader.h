class IReader{
public:
	IReader();
	~IReader();
	virtual char *read() = 0;
};
