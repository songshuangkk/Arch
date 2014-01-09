#include <iostream>

using namespace std;

int x = 100;

class widthStatic
{
	static int x;
	static int y;
public:

	void print() const {
		cout << "widthStatic::x = " << x << endl;
		cout << "widthStatic::y = " << y << endl;
	}
	
};

int widthStatic::x = 1;
int widthStatic::y = x + 1;

int main(int argc, char const *argv[])
{
	widthStatic WS;
	WS.print();

	cout << "x = " << endl;
	return 0;
}
