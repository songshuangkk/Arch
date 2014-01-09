#include <iostream>

using namespace std;

class X
{
	mutable int i;
public:
	X(int num);
	~X();
	void f() const;
	void e();
};

X::X(int num=0):i(num){
	cout << "X :" << this << endl;
}
X::~X(){ cout << "~X :" << this << endl;}

void X::f() const{
	cout << "i = " << ++i << endl;
}

void X::e(){
	cout << "i = " << i << endl;
}

int main(int argc, char const *argv[])
{
	X a(2);
	const X b(3);
	a.f();
	a.e();
	cout << "========================" << endl;
	b.f();
	//b.e();
	return 0;
}
