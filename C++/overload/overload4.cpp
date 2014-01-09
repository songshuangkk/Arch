#include <iostream>

using namespace std;

class three
{
	int i;
public:
	three(int I=0, int=0):i(I){}
};

class four
{
	int x;
public:
	four(int X):x(X){}
	operator three() const{return three(x);}
};

void g(three){}

int main(int argc, char const *argv[])
{
	four Four(1);
	g(Four);
	g(1);
	return 0;
}
