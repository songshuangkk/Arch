#include <iostream>

using namespace std;

int recur(int n)
{
	int sum=1;
	while(n)
	{
		sum = n * n-1*sum;
		n--;
	}
	return sum;
}

int main(int argc, char const *argv[])
{
	cout << recur(5) << endl;
	return 0;
}
