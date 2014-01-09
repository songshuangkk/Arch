#include <iostream>

using namespace std;

class X
{
	int i;
	static int j;
public:
	X(int I = 0):i(I){
		//Non-static member function can access
		//Static member function or data:
		j = i;
	}
	int val() const {return i;}

	static int incr()
	{
		//!i++ ; //Error:static member function
		//Cannot access non-static member data
		return ++j;
	}

	static int f(){
		cout << "j = " << j << endl;
		//!val(); //Error :static member functon
		//Cannot access non-static member function
		return incr();
	}
};

int X::j = 0;

int main(int argc, char const *argv[])
{
	X x;
	X* xp = &x;
	x.f();
	xp->f();
	X::f(); //Only works with static members
	return 0;
}
