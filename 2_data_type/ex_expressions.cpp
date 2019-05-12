#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
	// expression is a combination of operator constant and variables arranged as per the rule of the language
	// expression = one of more operand + zero of more operator to produce value

	// constant expression
	15;
	20*5/2.0;
	'x';

	// integral expression
	int m,n;
	m; 
	m*n-5; 
	5+int(2.0);

	// float expression
	float o,p;
	o; o*p-5; 5+float(2.0);

	// pointer expression
	int * ptr;
	&m;
	ptr;
	ptr+1;
	"xyz";

	// relational expression
	m <= n;
	m + n == o + p;
	m + n > 10;

	// logical expression
	m > n && o == 10;

	// bitwise expression
	m << 3;
	n >> 1;

	//
	// special assignment expression
	//
	
	// 1. Chained assignment expression
	int x, y;

	// both x and y are 10
	x = ( y = 10);
	x = y = 10;

	// float a = b = 12.34; // wrong    // can not used to init variable at declaration
	float a = 12.34, b = 12.34; // correct

	// 2. Embedded assignment expression
	 x = ( y = 50 ) + 10;
	
	// 3. Compound assignment expression
	 x = x + 10;
	 x += 10; // short hand operator of compound assignment operator
	
	 //
	 // implicit conversion
	 //  
	 //  smaller type -> wider type
	 //  char or short -> int   // integral widening
	 //
	 float r;
	 r = 5 + 2.75;

	return 0;
}
