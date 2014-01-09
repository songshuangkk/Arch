#include <iostream>

using namespace std;

class egg
{
	static egg E;
	int i;
	egg(int I):i(I){}
public:
	static egg instance(){return E;}
	int val(){return i;}	
};

egg egg::E(47);

int main(int argc, char const *argv[])
{
	//! egg x(1); Error -----cannot create an egg
	//You can access the signal instance
	cout << egg::instance().val() << endl;
	return 0;
}
