#include <fstream>
#include <iostream>
#include <assert.h>

#define SIZE 100

using namespace std;

int main(int argc, char const *argv[])
{
	int i = 0;
	char buff[SIZE];

	//Write data to the file
	ofstream out("a.txt");
	assert(out);

	//Read data from the file
	ifstream in("a.txt");
	assert(in);

	out << i++ << "hello world" << endl;

	in.getline(buff, SIZE);

	cout << buff << endl;
	
	return 0;
}
