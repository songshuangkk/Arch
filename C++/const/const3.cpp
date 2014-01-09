#include <iostream>

using namespace std;

int f3(){return 1;}
const int f4(){return 1;}

int main(int argc, char const *argv[])
{
	const int j = f3();
	int k = f4();

	cout << ++k << endl;

	return 0;
}
