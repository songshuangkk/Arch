#include <iostream>

using namespace std;

class bunch
{
public:
	enum 
	{
		size = 100
	};
	int i[size];

};

int main(int argc, char const *argv[])
{
	bunch a;
	cout << sizeof(a.i) << endl;

	//enum has not memory for the object, it is complie memory
	cout << sizeof(a) << endl;
	return 0;
}
