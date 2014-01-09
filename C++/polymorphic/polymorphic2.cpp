#include <iostream>

using namespace std;

class no_virtual
{
	int a;
public:
	void x() const{}
	int i() const{return 1;}
};

class one_virtual
{
	int a;
public:
	virtual void x() const{}
	int i() const{return 1;}
};

class two_virtual
{
	int a;
public:
	virtual void x() const{
		cout << "two_virtual" << endl;
	}
	virtual int i() const{
		cout << "two_virtual" << endl;
	}
};

class three:public two_virtual
{
	int a;
public:
	void x() const{
		cout << "three" << endl;
	}
};

int main(int argc, char const *argv[])
{
	cout << "int:" << sizeof(int) << endl;

	cout << "no_virtual:" << sizeof(no_virtual) << endl;

	cout << "void*:" << sizeof(void*) << endl;

	cout << "one_virtual:" << sizeof(one_virtual) << endl;

	cout << "two_virtual:" << sizeof(two_virtual) << endl;

	cout << "three:" << sizeof(three) << endl;

	three* T = new three;
	(T+1)->x();
	return 0;
}
