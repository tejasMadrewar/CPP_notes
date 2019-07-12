#include <iostream>

typedef void(*FunPtr)(int,int);       // making function pointer type


void Add(int i, int j){
	std::cout << i << " + " << j << " = " << i+j << std::endl;
}

void Subtract(int i, int j){
	std::cout << i << " - " << j << " = " << i-j << std::endl;
}
int main(){

	FunPtr ptr;     // delclaring function pointer
	ptr = &Add;   // assign value to pointer
	ptr(1,2);    // invoking function  NOTE that we are not using * operator
	std::cout << std::endl;

	ptr = &Subtract;  // assigning different value
	ptr(3, 2);

	return 0;
}
