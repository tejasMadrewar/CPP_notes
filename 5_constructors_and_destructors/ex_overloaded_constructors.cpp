#include <iostream>

using namespace std;

class complex
{
	float x,y;
public:
	complex(){}  // constructor no argument
	complex(float a){  // constructor one argument
		x = y = a;
	}
	complex(float real, float imag){  // constructor two argument
		x = real;
		y = imag;
	}

	friend complex sum(complex, complex);
	friend void show(complex);

};

complex sum(complex c1, complex c2){
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

void show(complex c){
	cout << c.x << " + j" << c.y << "\n";
}

int main(){
	complex A(2.7, 3.5);  // define and init second constructor
	complex B(1.6);      // define and init  first constructor
	complex C;            // define

	C =sum(A, B);

	cout << "A = "; show(A);
	cout << "B = "; show(B);
	cout << "C = "; show(C);


	complex P, Q, R;
	P = complex(2.5, 3.9); // explicit call
	Q = complex(1.6, 3.5); // explicit call
	R = sum(P, Q);

	cout << endl;
	cout << "P = "; show(P);
	cout << "Q = "; show(Q);
	cout << "R = "; show(R);
	
	return 0;
}
