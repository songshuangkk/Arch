#include <fstream>
#include <iostream>
#include <assert.h>

#define D(a) T << #a << endl; a

using namespace std;

ofstream T("format.out");

int main(int argc, char const *argv[])
{
	D(int i = 47;)
	D(float f = 2300114.414159;)
	char* s = "Is there any more";

	D(T.setf(ios::unitbuf);)
	D(T.setf(ios::stdio);)

	D(T.setf(ios::showbase);)
	D(T.setf(ios::uppercase);)
	D(T.setf(ios::showpos);)
	D(T << i << endl;)
	D(T.setf(ios::hex, ios::basefield);)
	D(T.unsetf(ios::uppercase);)
	D(T.setf(ios::oct, ios::basefield);)
	D(T << i << endl;)
	D(T.unsetf(ios::showbase);)
	D(T << i << endl;)
	D(T.setf(ios::dec, ios::basefield);)
	D(T.setf(ios::left, ios::adjustfield);)
	D(T.fill('0');)
     return 0;
}
