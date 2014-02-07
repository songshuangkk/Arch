#include <iostream>

using namespace std;


class base
{
public:
	virtual void print() const 
	{
		cout << "base::print" << endl;
	}

	virtual ~base(){}
};

class son: public base
{
public:
	void print() const
	{
		cout << "son::print" << endl;
	}
	virtual ~son(){}
};

typedef void (*F)(void);

int main(int argc, char const *argv[])
{
	son *s = new son;
	F f;
	f = (F)(**(int**)s);
	f();
	delete s;
	return 0;
}
