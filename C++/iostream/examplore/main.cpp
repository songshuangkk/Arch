#include <iostream>
#include <strstream>
#include <fstream>
#include <assert.h>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		cout << "Error argc" << endl;
		exit(-1);
	}

	ofstream mainfile(argv[1], ios::noreplace);
	assert(mainfile);

	istrstream name(argv[1]);
	ostrstream CAPname;

	char c;

	while(name.get(c))
		CAPname << char(toupper(c));
	CAPname << ends;
	mainfile << "//:" << ' ' << CAPname.rdbuf()
		<< " -- " << endl
		<< "#include <iostream>" << endl
		<< endl
		<< "main () {" << endl << endl
		<< "}" << endl;
	return 0;
}
