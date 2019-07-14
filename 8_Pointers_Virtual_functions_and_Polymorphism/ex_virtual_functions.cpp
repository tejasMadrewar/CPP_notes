#include <iostream>

class Base
{
public:
	void display(){
		std::cout << "\nDisplay Base" << std::endl;
	}

	virtual void show(){  // virtual function
		std::cout << "\nShow Base" << std::endl;
	}
};

class Derived: public Base
{
public:
	void display(){
		std::cout << "\nDisplay Derived" << std::endl;
	}

	void show(){
		std::cout << "\nShow Derived" << std::endl;
	}
};

int main(){
	Base B;
	Derived D;
	Base * bptr;

	std::cout << "\nbptr points to Base" << std::endl;
	bptr = &B;
	bptr->display(); // calls Base version
	bptr->show();    // calls Base version

	std::cout << "\n\nbptr points to Derived" << std::endl;
	bptr = &D;
	bptr->display(); // calls Base version
	bptr->show();    // calls Derived version

	return 0;
}
