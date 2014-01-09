#include <iostream>

using namespace std;

class base
{
public:
	base(int){}
	virtual void vf() const = 0;
};

class d1: virtual public base
{
public:


	d1(): base(1) {}
	void vf() const {
		cout << "d1" << endl;
	}
	
};

class d2:virtual public base
{
public:
	d2():base(2){}
	void vf() const {
		cout << "d2" << endl;
	}
	
};

class mi: public d1, public d2
{
public:
	mi():base(3){}
	void vf() const {
		cout << "mi" << endl;
	}
};

class x: public mi
{
public:
	x():base(4){}
	void vf() const{
		cout << "x" << endl;
	}
};


int main(int argc, char const *argv[])
{
	d1 d_1;
	d2 d_2;
	mi mi_1;
	x  x_1;
	d_1.vf();
	d_2.vf();
	mi_1.vf();
	x_1.vf();

	return 0;
}
