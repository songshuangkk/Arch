/*
 	tellp():out stream buff pointer seek
 	tellg():in stream buff pointer seek

 	seekp():out stream buff pointer seek
 	seekg():in stream buff pointer seek

 	ios::beg		start poiner
 	ios::cur		curent pointer
 	ios::end		end of pointer
 */


#include <iostream>
#include <fstream>
#include <assert.h>

#define SIZE 100

using namespace std;

int main(int argc, char const *argv[])
{
	char buff[SIZE];
	ifstream in("a.txt");
	assert(in);

	cout << "rdbuf: "<< in.rdbuf();
	/*seek begin pointer*/
	in.seekg(0,ios::beg);

	cout << "get:" << in.rdbuf();

	in.seekg(0, ios::beg);
	cout << "getline:" << in.rdbuf();
	return 0;
}
