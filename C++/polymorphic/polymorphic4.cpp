#include <iostream>

using namespace std;

enum note
{
	middleC, Csharp, Cflat
};

class instrument
{
public:
	virtual void play(note) const = 0;
	virtual const char* what() const = 0;
	virtual void adjust(int) = 0;
};

class wind: public instrument
{
public:
	void play(note) const{
		cout << "wind::play" << endl;
	}

	const char* what() const {return "wind";}

	void adjust(int){
		cout << "wind" << endl;
	}
};

class percussion: public instrument
{
public:
	void play(note) const{
		cout << "percussion::play" << endl;
	}

	const char* what() const {return "percussion";}

	void adjust(int){}
};

class string1: public instrument
{
public:
	void play(note) const{
		cout << "string1::play" << endl;
	}

	const char* what() const {return "string1";}

	void adjust(int){

	}
};

class brass: public wind
{
public:
	void play(note) const{
		cout << "brass::play" << endl;
	}

	const char* what() const {return "brass";}
};

class woodwind: public wind
{
public:
	void play(note) const{
		cout << "woodwind::play" << endl;
	}

	const char* what() const {return "woodwind";}
};

void tune(instrument& i)
{
	i.play(middleC);
}

void f(instrument& i){
	i.adjust(1);
}

int main(int argc, char const *argv[])
{
	wind flute;
	percussion drum;
	string1 violin;
	brass flugelhorn;
	woodwind recorder;

	tune(flute);
	tune(drum);
	tune(violin);
	tune(flugelhorn);
	tune(recorder);

	f(flugelhorn);
	return 0;
}

