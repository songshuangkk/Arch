#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ofstream out("howmany2.out");

class howmany2
{
	enum 
	{
		bufsize = 30
	};
	char id[bufsize];
	static int object_count;
public:
	 howmany2(const char* ID);
	 howmany2(const howmany2& h);
	~howmany2();

	void print(const char* msg);
};

howmany2::howmany2(const char* ID=NULL){
	if (ID)
	{
		strncpy(id, ID, bufsize);
	}
	else
		*id = 0;
	++object_count;
	print("howmany2");
}

howmany2::howmany2(const howmany2& h){
	strncpy(id,h.id, bufsize);
	strncat(id, " copy", bufsize - strlen(id));
	++object_count;
	print("howmany2(howmany2&)");
}

void howmany2::print(const char* msg = NULL){
	if (msg)
	{
		out << msg << endl;
	}
	out << '\t' << id << ":" 
		<< "object_count = "
		<< object_count << endl; 
}

howmany2::~howmany2(){
	--object_count;
	print("~howmany2()");
}

int howmany2::object_count = 0;

howmany2 f(howmany2 x){
	x.print("x argument inside f()");
	out << "return from f()" << endl;
	return x;
}

int main(int argc, char const *argv[])
{
	howmany2 h("h");
	out << "entering f()" << endl;
	howmany2 h2 = f(h);
	h2.print("h2 after call to f()");
	out << "call f(), no return value" << endl;
	f(h);
	out << "after call to f()" << endl;
	return 0;
}
