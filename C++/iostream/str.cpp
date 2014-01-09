#include <strstream>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	ostrstream s;
	s << "in" ;
	char *old = s.str();
	s.rdbuf()->freeze(0);

	for (int i = 0; i < 100; ++i)
	{
		s << "howdy";
	}
	cout << s.rdbuf() << endl;
	cout << "old = " << (void *)old << endl;
	cout << "new = " << (void *)s.str() << endl;

	delete s.str();
	return 0;
}
