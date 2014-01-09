#include <iostream>
#include <stdlib.h>

using namespace std;

class s
{
	int i[100];
public:
	s(){
		cout << "s::s()" << endl;
	}
	~s(){
		cout << "s::~s()" << endl;
	}
	friend void* operator new(size_t sz){
		cout << "sz = " << sz << endl;
		void* m = malloc(sz);
		if (!m)
		{
			cout << "out of memory" << endl;
		}
		cout << "operator new" << endl;
		return m;
	}
	friend void operator delete(void* m){
		cout << "operator delete" << endl;
		free(m);
	}
};

int main(int argc, char const *argv[])
{
	int* p = new int(47);
	delete p;

	s* sp = new s;
	delete sp;

	s* S = new s[3];
	delete[] S;
	return 0;
}
