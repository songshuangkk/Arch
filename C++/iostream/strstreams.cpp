#include <iostream>
#include <fstream>
 
/*strstream buff include head*/  
#include <strstream>

using namespace std;

int main(int argc, char const *argv[])
{
	/*Create istrstream object*/
	istrstream s("1.414 47 This is a test");
	int i;
	float f;

	s >> i >> f;

	char buff[100];
	s >> buff;

	cout << "i = " << i << " f = " << f;
	cout << " buff = " << buff << endl;

	cout << s.rdbuf();

	cout << "==================================" << endl;
		
	cout << "type an int, a float and a string:";
	int j;
	float g;
	cin >> j >> g;
	cin >> ws;
	char buf[100];
	cin.getline(buf, 100); 

	//cin,rdbuf() would be awkward
	ostrstream os(buf, 100, ios::app);
	os << endl;
	os << "integer = " <<  j << endl;
	os << "float	= " << g << endl;
	os << ends;
	cout << os.rdbuf();
	cout << os.rdbuf();

	return 0;
}
