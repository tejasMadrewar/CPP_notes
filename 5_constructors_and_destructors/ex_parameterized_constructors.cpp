#include <iostream>

using namespace std;


// in practice it may be necessary to initialize the various data elements of objects
// the constructor that can take arguments are called parameterized constructor.
// parameter of constructor can be any type excpet to the class to which it belongs.
// it can accept a reference to its own class as a parameter


class integer
{
	int m,n;
public:
	integer(){};        // this is required as we declared the parameterized constructor
	integer(int,int);   // constructor declaration
	integer(integer const & a);  // copy constructor
	display(){cout << "m = " << m << " n = " << n << endl;}

};

integer::integer(int x, int y){   // constructor defination
	m = x; n = y;  // setting default value to m and n
}

integer::integer(integer const & a){
	m = a.m; n = a.n;  // setting default value to m and n
}
int main(){

	integer int1(0, 100);  // implicit call
	integer int2 = integer(25 , 75); // explicit call

	int1.display();
	int2.display();
	int1 = int2;
	cout << "After copying int2 -> int1\n";
	int1.display();
	int2.display();
	
	return 0;
}
