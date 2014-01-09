#include <iostream>

using namespace std;

class X
{
	const int i;
	enum 
	{
		size = 10
	};

	int num[size];
public:
	X(int n);
	~X();
};

X::X	(int n=1):i(n){
	cout << "Create object" << endl;
}

X::~X()
{
	cout << "Free object" << endl;
}

int main(int argc, char const *argv[])
{
	X a(2);
	cout << "sizeof(a) = " << sizeof(a) << endl; 
	return 0;
}
