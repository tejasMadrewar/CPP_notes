#include <iostream>

// overloading binary operator

using namespace std;

class complex
{
	float x, y;
public:
	complex(){x = 0, y = 0;}    // constructor 1
	complex(float real, float imag){x = real, y = imag;} // constructor 2
	complex operator+(complex);   // overload + operator
	void display(void);
};

complex complex::operator+(complex c){
	complex temp;
	temp.x = x + c.x;
	temp.y = y + c.y;
	temp.display();
	return temp;
}

void complex::display(void){ cout << x << " + j" << y << "\n";}

int main(){
	complex c1, c2, c3;
	c1 = complex(2.5, 3.5);
	c2 = complex(1.6, 2.7);
	c3 = c1 + c2;      // overloaded +

	cout << "c1 = "; c1.display();
	cout << "c2 = "; c2.display();
	cout << "c3 = "; c3.display();


	return 0;

}
