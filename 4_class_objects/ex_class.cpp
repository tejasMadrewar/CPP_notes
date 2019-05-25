#include <iostream>
#include <cstring>

using namespace std;

// class
// class variable is known as objects
// only structure is provided not create memory space

class item
{
	int number;  // var declaration
	float cost;  // private by default
public:
	void getdata(int a, float b){ // definition is inside class
		number = a;
		cost = b;
}
	void putdata(void);  // function declaration using prototype
	int a;
};  // end with semicolon


void item::putdata(){   // definition outside of class
	std::cout << "number = " << number
	<< " cost = " << cost
	<< " a = " << a << std::endl;
}
int main()
{
	// creating objects
	item x;   // memory for x is created
	item y,z;
	// accessing members using dot
	x.getdata(23,45.7);
	x.a = 1234;        // allowed as it is public member
	//x.number = 4655; // not allowed as it is private member
	//x.cost = 5.345; // not allowed as it is private member
	x.putdata();
	
	return 0;
}
