#include <iostream>

using namespace std;

// constructor
// it is special member function of whose taks is to initialize the objects of its class.
// it is special because its name is the same as the class name.
// it is invoked whever an object of its associated class is created.
// it should be in public section
// do not return value not even void


class integer
{
public:
	integer();   // constructor declaration
	display(){cout << "m = " << m << " n = " << n;}

private:
	int m,n;
};

integer::integer(){   // constructor defination
	m = 0; n = 0;  // setting default value to m and n
}

int main(){
	integer a;
	a.display();
	
	return 0;
}
