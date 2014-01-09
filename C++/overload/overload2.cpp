#include <iostream>

using namespace std;

class A
{
	int i;
public:
	A(int n):i(n){
		cout << this << endl;
	}
	A(const A& a){
		i = a.i;
		cout << this;
		cout << "copy to use" << endl;
	}
	~A(){
		cout << "~" << this << endl;
	}
	friend const A& operator++(A& a);
	friend const A  operator++(A& a, int);
	friend ostream & operator<<(ostream& out, const A& a);
};

const A& operator++(A& a){
	a.i++;
	return a;
}

const A operator++(A& a, int){
	A b = a;
	a.i++;
	return b;
}

ostream& operator<<(ostream& out, const A& a){
	out << a.i << endl;
	return out;
}

int main(int argc, char const *argv[])
{
	A a(1);
	cout << "a++ = " << a++ << endl;
	A b(2);
	cout << "++b = " << ++b << endl; 
	return 0;
}
