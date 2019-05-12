#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	// c++ permits explicit type conversion of variables of expressions
	// (type-name)expression  //c
	// type-name(expression)  //c++
	float average,sum=50;
	int i;

	average = sum /(float)i; //c
	average = sum /float(i); //c++

	int * i_ptr;
	void * vptr;
	//i_ptr = int *(vptr); // illigal
	i_ptr = (int *)vptr;    // legal

	// alternative
	typedef int* int_ptr;
	i_ptr = int_ptr(vptr);

	// cpp new cast
	// const_cast
	// static_cast
	// dynamic_cast
	// reinterpret_cast


	return 0;
}
