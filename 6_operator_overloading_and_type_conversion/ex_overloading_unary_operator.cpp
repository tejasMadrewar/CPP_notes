#include <iostream>

// operator overloading
// 
// we can overload all operator except 
// 1. class member access operator (.,.*)
// 2. scope resolution operator (::) 
// 3. size operator (sizeof)
// 4. conditional operator ( ?: )
//
// "sematics" can be changed, not its "syntax", the gramamatical rules that govern its use such as the number of operands, precedence and associativity
//

// process
// define calss
// decalre public operator function of friend function
// define function
//


// overloading unary operator


using namespace std;

class space
{
	int x, y, z;
public:
	void getdata(int a, int b, int c);
	void display(void);
	void operator-(void);      // overloading unary "-" operator
};

void space::getdata(int a, int b, int c){ x = a; y = b; z = c; }

void space::display(void){ cout << x << " " << y << " " << z << "\n";}

void space::operator-(){x = -x; y = -y; z = -z;}   // defination

int main(){

	space S;
	S.getdata(10, -20, 30);

	cout << "S : "; S.display();
	-S;
	cout << "S : "; S.display();

	return 0;

}
