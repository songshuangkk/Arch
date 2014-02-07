#include <iostream>

using namespace std;

class base
{
public:
	virtual void f() const {
		cout << "base::f" << endl;
	}

	virtual void g() const {
		cout << "base::g" << endl;
	}

	virtual void h() const {
		cout << "base::h" << endl;
	}
};

int main(int argc, char const *argv[])
{
	typedef void (*Fun)(void);
	base *p = new base;
	Fun pFun = NULL;
	Fun t = NULL;
	pFun = (Fun)(**(int**)p);
	pFun();
	t = (Fun)*(int*)*(int*)p;
	t();
	return 0;
}
