#include <iostream>

using namespace std;

// symbolic constants
// const
// enum

// make const global in cpp using extern
extern const int total = 100;

int main()
{
	// const create type, #define have no type info
	// cpp requires const to init not hae default value of zero like c
	// in cpp const is local to file, c global outside file made local using static
	const int size = 10;
	// const size = 10;    // both are same
	char name[size];     // allowed in cpp, illegal in cpp

	//enum
	enum{X=100,Y=50,Z=200};

	
	return 0;
}
