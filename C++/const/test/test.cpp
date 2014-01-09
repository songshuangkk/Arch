#include <iostream>

using namespace std;

class bird
{
public:
	bird();
	~bird();
	void fly();
};

bird::bird(){}
bird::~bird(){}

void bird::fly(){
	cout << "bird fly" << endl;
}

class rock
{
public:
	rock();
	~rock();
};

rock::rock(){}
rock::~rock(){}

int main(int argc, char const *argv[])
{
	rock a;
	void* pa = (void *)&a;
	bird* pb = static_cast<bird*>(pa);

	pb->fly();
	return 0;
}
