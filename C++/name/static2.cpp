#include <iostream>

using namespace std;

class A
{
	static int i;
public:
	void print(){cout << i << endl;}
};

int A::i = 1;

int main(int argc, char const *argv[])
{
	A a;
	a.print();
	return 0;
}
