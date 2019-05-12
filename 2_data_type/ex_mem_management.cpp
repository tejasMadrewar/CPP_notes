#include <iostream>
#include <iomanip>

using namespace std;

// out own manipulator
ostream &symobol (ostream &output);

int main()
{
	//
	//   alternative to malloc free, in cpp is new and delete
	//   not necessary to give size
	//
	//   auto compute size of data object
	//   auto return pointer of correct type
	//   init object while creating memory
	//
	//
	int *p = new int;

	// note down round bracket
	int *q = new int(25);   // init with value 25

	// note down square bracket
	int *r = new int[10];  // make memory space for 10 int

	cout << "*p" << " "<< *p << " ";
	cout << "*q" << " "<< *q << " ";
	cout << "*r" << " "<< *r << " " << endl;

	//arrays
	//
	int m = 4;

	// first may be variable other must be constant
	void* n = new int[3][4][5];  // legal
	void* o = new int[m][5][4];  // legal
	//new int[3][5][];  // illegal
	//new int[][5][4];  // illegal
	//
	

	// manipulator
	int sum = 123;
	// right justified
	cout << "\n"<< 4 << setw(15) << sum  << 4<<"\n";
	cout << 233445 << symobol;


	// type case operator
	int i = 45;
	float average = sum /(float)i; // c notation alternative
	average = sum /float(i);      // c++

	// function call notation can only be used if type is an identifier
	//int *(q); // illegal
	(int *)(q); // legal

	typedef int * int_ptr;  // another alternative
	int_ptr(t);

	return 0;
}

// out own manipulator
ostream &symobol (ostream &output){
	return output << "\tRs";
}
