#include <iostream>

int main(){

	int a = 10, *ptr;

	ptr = & a;  // assign address to pointer

	std::cout << "Value of a is : " << a << std::endl;
	*ptr = (*ptr)/2;     // getting value and assigning new value by reference
	std::cout << "Value of a is : " << (*ptr) << std::endl;

	return 0;
}
