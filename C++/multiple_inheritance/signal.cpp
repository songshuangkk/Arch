#include <iostream>

using namespace std;

class d
{
public:
	virtual void p() const {
		cout << "d" << endl;
	}
};

class c:public d
{
public:
	void p() const {
		cout << "c" << endl;
	}
	virtual void q() const{
		cout << "q" << endl;
	}
};

int main(int argc, char const *argv[])
{
	c c1;
	cout << "base address: " << &c1<< endl;
	cout << "function address: " << (int *)*(int *)&c1 << endl;
	
	return 0;
}
