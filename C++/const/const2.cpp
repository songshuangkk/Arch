#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
	int d = 1;
	const int e = 2;
	int* v = &d;
	//int* w = &e;	/*Error can't to the unconst object*/

	//Use const better	
	const char* buf = "Hello World";
	return 0;
}
