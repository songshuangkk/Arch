#include <iostream>

using namespace std;

class base
{
	int i;
public:
	base(int I):i(I){}
	virtual int value() const{return i;}
};

class derived: public base{
public:
	derived(int I):base(I){}
	int value() const{
		return base::value() * 2;
	}

	virtual int shift(int x) const{
		return base::value() << x;
	}
};

int main(int argc, char const *argv[])
{
	base* B[] = {new base(7), new derived(7)};

	cout << "B[0] -> value = " 
		 << B[0]->value() << endl;

	cout << "B[1] -> value = " 
		 << B[1]->value() << endl; 

	cout << "B[1] -> value = " 
		 << B[1]->shift(3) << endl; 
	return 0;
}


