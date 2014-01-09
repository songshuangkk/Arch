#include <iostream>

using namespace std;

void swap(char& ch)
{
	ch = 'b';
}

int main(int argc, char const *argv[])
{
	char c = 'a';

	cout << "c = " << c << endl;
	swap(c);
	cout << "c = " << c << endl;
	return 0;
}
