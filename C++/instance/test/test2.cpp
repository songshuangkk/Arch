#include <iostream>
#include <strings.h>
#include <string.h>

using namespace std;

class A
{
	enum 
	{
		size = 10
	};
	char buf[size];
public:
	A(const char* msg);
	A(const A& B);
	~A();
	void print();
};

A::A(const char* msg){
	bzero(buf, size);
	strncpy(buf, msg, strlen(msg));
	cout << "A create" << endl;
}

A::A(const A& B){
	bzero(buf, size);
	strncpy(buf, B.buf, size);
	cout << "Copy create" << endl;
}

A::~A(){
	cout << "Free copy" << endl;
}

void A::print(){
	cout << buf << endl;
}

A ret(){
	A a("shuang");
	return	a;
}

int main(int argc, char const *argv[])
{
	A a("song");

	a.print();

	A b = ret();
	b.print();
	return 0;
}
