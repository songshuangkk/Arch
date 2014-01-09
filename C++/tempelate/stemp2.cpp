#include <iostream>
#include <assert.h>

using namespace std;

template<class T>
class array{
	enum 
	{
		size = 100
	};
	T A[size];
public:
	T& operator[](int index);
};

template<class T>
T& array<T>::operator[](int index){
	assert(index >= 0 && index < size);
	return A[index];
}

int main(int argc, char const *argv[])
{
	array<float> fa;
	fa[0] = 1.414;
	return 0;
}
