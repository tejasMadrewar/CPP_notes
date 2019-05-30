#include <iostream>
#include <cstring>

using namespace std;

// friend functions
// C++ allows the common function to be made friendly with both the class or function  to have access to the private data of class
// such function need not to be member of class
//
// characteristics
// 1. It is not in scope of class which it has been declared as friend
// 2. It cannot be called using the object of that class
// 3. It can be invoked like normal function without help of class
// 4. To access private member it used dot operator
// 5. Can be declared in public or private part of class
// 6. It has objects as arguments


class sample
{
	int a;
	int b;
public:
	void setvalue(){a = 25; b = 40;}
	friend float mean(sample s);
};

float mean( sample s){
	return float((s.a + s.b )/ 2.0);  // friend function accessing the private members
}

int main()
{
	sample X;
	X.setvalue();

	cout << "Mean value "
		<< mean(X) // friend function is invoked
		<< "\n";
	
	return 0;
}
