#include <iostream>

using namespace std;

// copy constructor is used to declare and initialize an object from another object
//

class code
{
	int id;
public:
	code(){}   // default constructor
	code(int a){id = a;}  // constructor
	code(code & x){id = x.id;} // copy constructor

	void display(void){
		cout << id;
	}

};

int main(){
	code A(100);   // object A is created and initialize
	code B(A); // copy constructor is called
	code C = A; // copy constructor is called

	code D; // D is created not initialize

	D = A;   // copy constructor is not called
	// simply assign the values ot A to D member by member
	// this is task of the overloaded assignment operator(=)
	

	cout << "\n id of A: "; A.display();
	cout << "\n id of B: "; B.display();
	cout << "\n id of C: "; C.display();
	cout << "\n id of D: "; D.display();


	return 0;
}
