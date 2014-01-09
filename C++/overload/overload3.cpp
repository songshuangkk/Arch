#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class withPointer
{
	char* p;
	enum 
	{
		blocksz = 100
	};
public:
	withPointer(){
		p = (char*)malloc(blocksz);
		memset(p, 1, blocksz);
	}

	withPointer(const withPointer& wp){
		p = (char*)malloc(blocksz);
		memcpy(p, wp.p, blocksz);
	}

	withPointer& operator=(const withPointer& wp){
		if (&wp != this)
		{
			memcpy(p, wp.p, blocksz);
		}
		return *this;
	}
	~withPointer(){
		free(p);
	}
	
};

int main(int argc, char const *argv[])
{
	return 0;
}
