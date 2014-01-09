#include <iostream>

using namespace std;

class X{};

X f(){return X();}

void g1(X&){}
void g2(const X&){}

int main(int argc, char const *argv[])
{
	g1(f());
	g2(f());
	return 0;
}
