#include <iostream>
#include <strstream>

using namespace std;

int main(int argc, char const *argv[])
{
	ostrstream A;
	A << "Hello World";
	cout << A.rdbuf();
	cout << endl;
	A << "songshuang";
	cout << A.rdbuf();

	/*Use str() later could not create more memory*/
	char* cp = A.str();
	cout << "cp = " << cp;
	cout << endl;

	/*Remove memory*/
	A.rdbuf()->freeze(0);
	A << "songshuang";
	cout << A.rdbuf();
	cout << endl;
	cout << A.rdbuf();
	return 0;
}
