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
// Rules for overloading operators
// 1. Only existing operator, new operator not created
// 2. at least one operand is userdefined type
// 3. can not change basic meaning e.g. make - to addition
// 4. must follow syntax rule of original operator
// 5. some operator can not be overloaded
// 6. can not use friend function to overload certain operator ( = , (), [], -> )
// 7. unary operator - member function takes not explicit arguments and return no explicit values
// 	friend function - one reference argument
// 8. binary operator - member function takes one explicit argument
// 	friend function - 2 explicit arguments
// 9. binary operator - member function left hand operand must be object of revelant class
// 10. binary operand - +, -, *, / must return vallue must not change their own argument


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
