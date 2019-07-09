#include <iostream>

int main(){
	int a, *ptr1, **ptr2;  // declaration
	ptr1 = &a;   // init
	ptr2 = &ptr1;

	std::cout << "Address of a : " << ptr1 << std::endl;
	std::cout << "Address of ptr1 : " << ptr2 << std::endl;
	std::cout << "After incrementing address value : " << std::endl;

	ptr1 += 2;

	std::cout << "Address of a : " << ptr1 << std::endl;


	ptr2 += 2;

	std::cout << "The address of ptr1 : " <<  ptr2 << std::endl;

	return 0;
}
