#include <iostream>

using namespace std;

template<typename T> bool Ascending(const T* num, int i)
{
	int j = 1;
	while(j<=i){
		if(num[j] > num[j-1])	{
			j++;
			continue;
		}
		break;
	}
	if (j == i+1)
	{
		return true;
	}
	return false;
}

int main(int argc, char const *argv[])
{
	int n[10] = {1,2,3,4,9,6,7,8,9,10};
	cout << Ascending(n,10) << endl;
	return 0;
}
