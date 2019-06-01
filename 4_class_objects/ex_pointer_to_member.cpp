#include <iostream>

using namespace std;

// const member function
// if member function does not alter any data in the class, then we ay delcare it as a const member function


// pointer to member
// public member of object can be access using pointer
// A::*  - pointer to member of class A
// A::m  - address of m member of A class


class test
{
	int x, y;

public:
	int z;
	int sum(int a, int b) const; // const member function
	void set(int a, int b, int c){x = a; y = b; z = c; }
	void display() const { cout << "x = " << x << 
		" y = " << y <<
		" z = " << z ;} // const member function

};

int test::sum(int a, int b)const{
	return(a+b);
}


int main(int argc, const char *argv[])
{
	test a;
	a.set(34, 89, 45);
	a.display(); 
	cout << endl;


	// pointer to member
	int test::* ip = &test::z;
	//int *itest = &z;  // won't work
	cout << a.*ip << endl;   // display z
	cout << a.z << endl;   // same as above


	test * testp ;   // pointer of type test
	testp = &a;     // assign address of obejct a
	cout << testp->*ip << endl;  // print z using pointer to object and pointer to member
	cout << testp->z << endl;   // print z using pointer to obejct

	
	return 0;
}
