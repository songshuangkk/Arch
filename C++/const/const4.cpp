#include <iostream>

using namespace std;

void f(int& num)
{
	num++;
	cout << "num = " << num << endl;
}

int main(int argc, char const *argv[])
{
	int i = 1;
	f(i);
	cout << "i = " << i << endl;
	return 0;
}
