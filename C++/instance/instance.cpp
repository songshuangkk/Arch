#include <iostream>

using namespace std;

void incrememt(int*& i)
{
	i++;
}

int main(int argc, char const *argv[])
{
	int* i = NULL;
	cout << "i = " << i << endl;
	incrememt(i);
	cout << "i = " << i << endl;
	return 0;
}
