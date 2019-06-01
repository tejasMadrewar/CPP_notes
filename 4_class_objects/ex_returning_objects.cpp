#include <iostream>
#include <cstring>

using namespace std;

class complex
{
	float x;  // real part
	float y;  // imaginary part

	public:

	void input(float real, float imag){x = real; y = imag;}

	friend complex sum(complex, complex);  // friend function is declared which returns object of class

	void show(complex);
};

complex sum(complex c1, complex c2){
	complex c3;

	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;

	return c3;   // complex object is returned
}


void complex::show(complex c){
	cout << c.x << " +j" << c.y;
}


int main()
{

	complex A,B,C;

	A.input(3.1, 5.65);
	B.input(2.75, 1.2);

	C = sum(A,B); // C = A + B   // object is returned form the function

	cout << "A = "; A.show(A); cout << endl;
	cout << "B = "; B.show(B); cout << endl;
	cout << "C = "; C.show(C); cout << endl;

	
	return 0;
}
