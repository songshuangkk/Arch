#include <iostream>

using namespace std;

class Stream{
	char c;
public:
	friend ostream& operator<<(ostream& out, const Stream& s);
	friend istream& operator>>(istream& in, Stream& s);

	char show() const {return c;}
	void put(char c){
		this->c = c;
	}
};

ostream& operator<<(ostream& out, const Stream& s){
	out << s.show() << endl;
	return out;
}

istream& operator>>(istream& in, Stream& s){
	char c;
	in >> c;
	s.put(c);
	return in;
}

int main(int argc, char const *argv[])
{
	Stream s;
	cin >> s;
	cout << s << endl;
	return 0;
}
