#include <iostream>

using namespace std;

class base{
public:
	virtual void f() const {
		cout << "Base::f" << endl;
	}
	virtual void g() const {
		cout << "Base::g" << endl;
	}
	virtual void h() const {
		cout << "Base::h" << endl;
	}
};

int main(int argc, char const *argv[])
{
	typedef void(*Fun)(void);
	base b;
	cout << "virtual table address: " << &b << endl;
	cout << "virtual function address(f()): " << (int*)(*(int*)(&b)) << endl;
	cout << "virtual function address(g()): " << (int*)((*(int*)(&b))+1) << endl;
	cout << "virtual function address(g()): " << (*(int*)(&b))+1 << endl;
	Fun pFun = (Fun)*(((int*)*(int*)(&b))+1);
	pFun();
	return 0;
}
