#include <iostream>
#include <assert.h>

using namespace std;

template<class T, int size=100>
class mblock{
	T array[size];
public:
	T& operator[](int index){
		assert(index >= 0&& index < size);
		return array[index];
	}
};

class number{
	float f;
public:
	number(float F=0.0f):f(F){}
	number& operator[](const number& n){
		f = n.f;
		return *this;
	}
	operator float() const{return f;}
	friend ostream& operator<<(ostream& os, const number& x){
		return os << x.f;
	}
};

template<class T, int sz=20>
class holder
{
	mblock<T, sz>* np;
public:
	holder():np(NULL){}
	number& operator[](int i){
		assert(i >= 0 && i < sz);
		return np->operator[](i);
	}
};

int main(int argc, char const *argv[])
{
	holder<number, 20> H;
	for (int i = 0; i < 20; ++i)
	{
		H[i] = i;
	}
	for (int i = 0; i < 20; ++i)
	{
		cout << H[i] << endl;
	}
	return 0;
}

