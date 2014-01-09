#include <iostream>
#include <new>
#include <stdlib.h>

using namespace std;

void out_of_memory(){
	cout << "out of memory" << endl;
	exit(1);
}

int main(int argc, char const *argv[])
{
	set_new_handler(out_of_memory);
	while(1)
		new int[1000];
	return 0;
}
