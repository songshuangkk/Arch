#include <iostream>

using namespace std;

template <typename T> bool input(T& num)
{
	if (num > 0)
	{
		return true;
	}

	if (num >-0.000001 && num<0.000001)
	{
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	cout << input(n) << endl;
	return 0;
}