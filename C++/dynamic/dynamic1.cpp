#include <iostream>

using namespace std;

class tree
{
	int height;
public:
	tree(int Height):height(Height){}
	~tree(){cout << "*" << endl;}

	friend ostream& operator<< (ostream& os, const tree* t){
		return os << "tree height is:" << t->height << endl;
	}

};

int main(int argc, char const *argv[])
{
	tree* T = new tree(40);
	cout << T;
	delete T;
	return 0;
}
