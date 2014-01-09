#include <iostream>

using namespace std;

class T
{
	int i;
	static int n;
public:
	T(int n):i(n){
		cout << "Create : " << this << endl;
		n++;
	}
	T(const T& t){
		cout << "Copy" << endl;
	}
	~T(){
		cout << "Free " << this << endl;
	}
	static int show(){return n;}
	const T operator+(const T& t);
	const T operator-(const T& t);
	const T operator*(const T& t);
	const T operator/(const T& t);

	operator int()const{return i;}

	int get()const{return i;}

	friend ostream& operator<<(ostream& out, const T& t);
};

const T T::operator+(const T& t){
	return T(i+t.get());
}
const T T::operator-(const T& t){
	return T(i-t.get());
}
const T T::operator*(const T& t){
	return T(i*t.get());
}
const T T::operator/(const T& t){
	return T(i/t.get());
}

ostream& operator<<(ostream& out, const T& t){
	out << t.get();
	return out;
}

int T::n = 0;
int main(int argc, char const *argv[])
{
	T t1(1), t2(2);
 
	cout << t1 + t2 << endl;
	cout << t1 * t2 << endl;
	cout << t1 - t2 << endl;
	cout << t1 / t2 << endl;

	cout << T::show() << endl;
	return 0;
}
