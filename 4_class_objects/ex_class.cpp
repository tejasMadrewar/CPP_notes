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
	void getdata(int a, float b);  // function declaration using prototype
	void putdata(void);
	int a;
};  // end with semicolon

void item::getdata(int a, float b){
	number = a;
	cost = b;
}

void item::putdata(){
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
	x.a = 1234;
	//x.number = 4655; // not allowed as it is private
	//x.cost = 5.345; // not allowed as it is private
	x.putdata();
	
	return 0;
}
