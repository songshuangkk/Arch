#include <iostream>

using namespace std;

class integer
{
	int i;
public:
	integer(int I){i = I;}
	const integer operator+ (const integer& rv)const {
		cout << "operator+" << endl;
		return integer(i+rv.i);
	}

	integer& operator+= (const integer& rv){
		cout << "operator += " << endl;
		i += rv.i;
		return *this;
	}
		
};

int main(int argc, char const *argv[])
{
	cout << "built-in types:" << endl;
	int i = 1, j = 2, k = 3;
	k += i + j;
	cout << "k = " << k << endl;
	cout << "user-defined types: " << endl;
	integer I(1), J(2), K(3);
	K += I + J;
	return 0;
}
