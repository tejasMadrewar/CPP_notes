#include <iostream>

using namespace std;


// in practice it may be necessary to initialize the various data elements of objects
// the constructor that can take arguments are called parameterized constructor.


class integer
{
	int m,n;
public:
	integer(){};        // this is required as we declared the parameterized constructor
	integer(int,int);   // constructor declaration
	display(){cout << "m = " << m << " n = " << n << endl;}

};

integer::integer(int x, int y){   // constructor defination
	m = x; n = y;  // setting default value to m and n
}

int main(){

	integer int1(0, 100);  // implicit call
	integer int2 = integer(25 , 75); // explicit call

	int1.display();
	int2.display();
	
	return 0;
}
