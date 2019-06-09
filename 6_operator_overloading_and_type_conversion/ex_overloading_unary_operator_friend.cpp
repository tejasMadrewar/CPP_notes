#include <iostream>

using namespace std;

class space
{
	int x, y, z;
public:
	void getdata(int a, int b, int c);
	void display(void);
	friend void operator-(space &S);      // overloading unary "-" operator using friend function note that value is pass by reference
};

void space::getdata(int a, int b, int c){ x = a; y = b; z = c; }

void space::display(void){ cout << x << " " << y << " " << z << "\n";}

void operator-(space &S){  // argument is passed by reference
	S.x = -S.x;
	S.y = -S.y;
	S.y = -S.z;
}   // defination

int main(){

	space S;
	S.getdata(10, -20, 30);

	cout << "S : "; S.display();
	-S;
	cout << "S : "; S.display();

	return 0;

}
