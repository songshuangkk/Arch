#include <iostream>

using namespace std;

class Intger
{
	enum 
	{
		size = 10
	};
	int num[size];
	const int i;
	static int n;
public:
	Intger(int n);
	~Intger();
	static int push()
	{
		return n++;
	}
	inline void print(){
		for (int i = 0; i < size; ++i)
		{
			num[i] = push();
		}
		for (int i = 0; i < size; ++i)
		{
			cout << num[i] << endl;
		}
	}
};

int Intger::n = 0;

Intger::Intger(int n = 0):i(n){
	cout << "Create Intger: " << this << endl;
}

Intger::~Intger(){
	cout << "Free Intger: " << this << endl;
}

int main(int argc, char const *argv[])
{
	Intger A(1);
	A.print();
	return 0;
}
