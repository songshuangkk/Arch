#include <iostream>
#include <string.h>

using namespace std;

class StringStack
{
	enum 
	{
		size = 100
	};
	const char* stack[size];
	int index;

public:
	StringStack();
	void push(const char* s);
	const char* pop();
	
};

StringStack::StringStack():index(0){
	memset(stack, 0, sizeof(stack));
}

void StringStack::push(const char* s){
	if (index < size)
	{
		stack[index++] = s;
	}
}

const char* StringStack::pop(){
	if (index > 0)
	{
		const char* rv = stack[--index];
		stack[index] = 0;
		return rv;
	}
	return 0;
}

const char* iceCream[] = {
	"pralines & cream",
	"fudge ripple",
	"jamocha almond fudge",
	"wild mountain blackberry",
	"raspberry sorbet",
	"lemon swirl",
	"rocky road",
	"deep chocolate fudge"
};

const int ICsz = (sizeof(iceCream))/4;

int main(int argc, char const *argv[])
{
	StringStack SS;
	for (int i = 0; i < ICsz; ++i)
	{
		SS.push(iceCream[i]);
	}
	const char* cp;
	while((cp = SS.pop()) != 0)
		cout << cp << endl;
	return 0;
}
