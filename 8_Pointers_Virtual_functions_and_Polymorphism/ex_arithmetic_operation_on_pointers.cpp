#include <iostream>

int main(){

	int num[] = {56, 75, 22, 18, 90};
	int *ptr;

	int i;

	std::cout << "Array of value are : " << std::endl;
	for (i = 0; i < 5; i++) {
		std::cout << num[i] << std::endl;
	}
	ptr = num;   // copy address of array
	std::cout << "Value of pointer : " << *ptr << std::endl;

	ptr++;
	std::cout << "Value of ptr++ : " << *ptr << std::endl;

	ptr--;
	std::cout << "Value of ptr-- : " << *ptr << std::endl;

	ptr = ptr + 2;
	std::cout << "Value of ptr + 2 : " << *ptr << std::endl;

	ptr = ptr - 1;
	std::cout << "Value of ptr - 1 : " << *ptr << std::endl;

	ptr += 3;
	std::cout << "Value of ptr += 3 : " << *ptr << std::endl;

	ptr -= 2;
	std::cout << "Value of ptr -= 2 : " << *ptr << std::endl;

	return 0;
}
