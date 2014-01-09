#include <fstream>
#include <strstream>
#include <iostream>

using namespce std;

#define SZ 40	//Buffer sizes
#define BSZ 100

int main(int argc, char const *argv[])
{
	assert(argc == 2); //File set name
	enum bufs
	{
		base, header, implement, Hline1, guard1, guard2, guard3,
		CPPline1, include, bufnum
	};

	char b[bufnum][SZ];

	ostrstream osarray[] = {
		ostrstream(b[base], SZ),
		ostrstream(b[header], SZ),
		ostrstream(b[implement], SZ),
		ostrstream(b[Hline1], SZ),
		ostrstream(b[guard1], SZ),
		ostrstream(b[guard2], SZ),
		ostrstream(b[guard3], SZ),
		ostrstream(b[CPPline1], SZ),
		ostrstream(b[include], SZ),
	};

	osarray[base] << argv[1] << ends;
	//Find any '.' in the string using the 
	//Standard C library function strchr():
	char* period = strchr(b[base], '.');
	if (period)
	{
		*period = 0;	//Strip extension
	}
	//Force to upper case
	for (int i = 0; b[base][i]; ++i)
	{
		b[base][i] = toupper(b[base][i]);
	}
	//Create file names and internal lines:
	osarray[header] << b[base] << ".H" << ends;
	osarray[implement] << b[base] << ".CPP" << ends;
	osarray[Hline1] <<
	return 0;
}
