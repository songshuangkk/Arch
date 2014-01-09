#include <iostream>
#include <fstream>

using namespace std;

ofstream out("mithis.out");

class base1
{
	char c[0x10];
public:
	void printthis1(){
		out << "base1 this = " << this << endl;
	}
};

class base2
{
	char c[0x10];
public:
	void printthis2(){
		out << "base2 this = " << this << endl;
	}
};

class member1{
	char c[0x10];
public:
	void printthism1(){
		out << "member1 this = " << this << endl;
	}
};

class member2
{
	char c[0x10];
public:
	void printthism2(){
		out << "member2 this = " << this << endl;
	}
};

class mi: public base1, public base2
{
	member1 m1;
	member2 m2;
public:
	void printthis(){
		out << "mi this = " << this << endl;
	}
	printthis1();
	printthis2();
	m1.printthism1();
	m2.printthism2();
};

int main(int argc, char const *argv[])
{
	
	return 0;
}
