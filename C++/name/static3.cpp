#include <iostream>

using namespace std;

/*Local class cannot have static data*/

/*
void f()
{
	class A
	{
		static int i;
	public:
	};
}

int A::i = 1;
*/

class outer
{
	class inner
	{
		static int i;
	};
};

int outer::inner::i = 1;
int main(int argc, char const *argv[])
{
	outer a;
	return 0;
}
