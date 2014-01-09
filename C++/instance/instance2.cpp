#include <iostream>
#include <fstream>

using namespace std;

ofstream out("howmany.out");

class howmany
{
	static int object_count;
public:
	howmany();
	~howmany();
	static void print(const char* msg);
};

howmany::howmany(){object_count++;
	cout << "howmany" << endl;
}
howmany::~howmany(){object_count--;
	cout << "~howmany" << endl;
	print("~howmany");
}

void howmany::print(const char* msg){
	if (msg)
	{
		out << msg << ": ";
	}
	out << "object_count = " << object_count << endl;
}

int howmany::object_count = 0;

//Pass and return BY VALUE:
howmany f(howmany x){
	x.print("x argument inside f()");
	return x;
}


int main(int argc, char const *argv[])
{
	howmany h;
	howmany::print("after construction of h");
	howmany h2 = f(h);
	howmany::print("after call to f()");
	return 0;
}
