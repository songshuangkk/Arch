#ifndef TSTASH_H
#define TSTASH_H 

#include <stdlib.h>
#include <assert.h>

enum owns
{
	no = 0, 
	yes = 1,
	Default
};

template<class Type, int sz>
class tstashIter;

template<class Type, int chunksize = 20>
class tstash{
	int quantity;
	int next;
	owns own;
	void inflate(int increase = chunksize);
protected:
	Type** storage;
public:
	tstash(owns owns = yes);
	~tstash();
	int Owns()const{return own;}
	void Owns(owns newOwns){own = newOwns;}
	int add(Type* element);
	int remove(int index, owns d = Default);
	Type* operator[](int index);
	int count()const{return next;}
	friend class tstashIter<Type, chunksize>;
};

template<class Type, int sz = 20>
class tstashIter{
	tstash<Type, sz>& ts;
	int index;
public:
	tstashIter(tstash<Type, sz>& TS):ts(TS), index(0){}
	tstashIter(const tstashIter& rv):ts(rv.ts), index(rv.index){}
	void forward(int amount){
		index += amount;
		if (index < 0)
		{
			index = 0;
		}
	}

	int operator++(){
		if (++index >= ts.next)
		{
			return 0;
		}
		return 1;
	}

	int operator++(int){
		return operator++();
	}
	int operator--(){
		if (--index < 0)
		{
			return 0;
		}
		return 1;
	}

	int operator--(int){
		return operator--();
	}

	operator int(){
		return index >=0 && index < ts.index;
	}

	Type* operator->(){
		Type* t = ts.storage[index];
		if (t)
		{
			return t;
		}
		return 0;
	}

	//Remove the current element
	int remove(owns d = Default){
		return ts.remove(index, d);
	}

	template<class Type, int sz>
	tstash<Type, sz>::tstash(owns Owns):own(Owns){
		quantity = 0;
		storage = 0;
		next = 0;
	}
};

#endif