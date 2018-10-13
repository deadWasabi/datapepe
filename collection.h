
class collection {
protected:
	collection();
	virtual ~collection();

	virtual is_empty() =0; //pure virtual (abstract)
	virtual size() =0;
	virtual reverse() =0;
};

