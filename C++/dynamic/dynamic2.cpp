#include <iostream>

using namespace std;

class D
{
	char* c;
public:
	~D(){
		delete c;
	}
};

int main(int argc, char const *argv[])
{
	const D* fd = new D[100];
	delete[] fd;
	D const * fa = new D[10];
	//delete[10] fa;	Error!
	delete[] fa;
	return 0;
}
