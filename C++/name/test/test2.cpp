#include <iostream>
#include <cstdlib>

using namespace std;

class A
{
public:
	A();
	~A();
};

A::A(){
	cout << "Create : " << this << endl;
}

A::~A(){
	cout << "Free : " << this << endl;
}


int main(int argc, char const *argv[])
{
	static A a;
	exit;
	return 0;
}
