#include <iostream>

using namespace std;

class base
{
public:
	virtual int f() const {
		cout << "base" ;
		return 1;
	}
};

class derived:public base
{
public:
	int f() const {
		cout << "derived" ;
		return 2;
	}
};

int main(int argc, char const *argv[])
{
	derived d;
	derived* b1 = new derived;
	derived& b2 = d;
	base b3;

	cout << "b1->f() " << b1->f() << endl;
	cout << "b2.f() " << b2.f() << endl;
	
	cout << b3.f() << endl;
	return 0;
}
