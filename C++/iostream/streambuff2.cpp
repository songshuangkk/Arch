#include <iostream>
#include <fstream>
#include <unistd.h>
#include <assert.h>

#define SIZE 100

using namespace std;

int main(int argc, char const *argv[])
{
	char buff[SIZE] = {};

	ifstream in("a.txt");
	assert(in);
	
	ofstream out("a.ou");
	assert(out);

	out << in.rdbuf();
	in.close();
	out.close();

	ifstream in2("a.ou", ios::in|ios::out);
	ostream out2(in2.rdbuf());

	cout << in2.rdbuf();
	out2 << "Where does this end up?";
	out2.seekp(0, ios::beg);
	out2 << "And what about this?";
	in2.seekg(0, ios::beg);
	cout << in2.rdbuf();

	return 0;
}
