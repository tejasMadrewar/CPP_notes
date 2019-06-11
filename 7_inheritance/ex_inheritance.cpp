#include <iostream>

using namespace std;

// Inheritance
// The mechanism of deriving a new class form an old one is called inheritance
// The old class is refered as the base class and the new one is called the derived class or subclass
//
// Type of inheritance
// 1. Single inheritance
//      A -> B
//
// 2. multiple inheritance
//    A -  
//       | - > C
//    B -  
//
// 3. Hierachical inheritance
//    -> B
// A- |   
//    -> C
//    |
//    -> D
//
// 4. Multilevel inheritance
//
//  A -> B -> C
//
//  5. Hybrid inheritance

//    -> B -        
// A->|     |-> D
//    -> C -           
//
//
// Defining derived classes
// class derived-class-name : visubility-mode base-class-name
// {
// 	/* data */
// };
//
//  Derived class visibility
//
//   ------------------------------------------------------------------
//  |              |                  Derived class visibility         |                 
//  |  Base        |-------------------------------------------------- |
//  |  class       |       Public    |   Private     |    Protected    |                       
//  |  visibility  |     Derivation  |  Derivation   |   Derivation    |
//  |--------------|-----------------|---------------|-----------------|
//  |  Private     |   not           |  not          |  not            |                       
//  |              |   inherited     |  inherited    |  inherited      |                
//  |------------------------------------------------------------------|
//  |  Protected   |  Protected      |  Private      |  Protected      |
//  |              |                 |               |                 |                
//  |------------------------------------------------------------------|
//  |  Public      |  Public         |  Private      |  Protected      |               
//  |              |                 |               |                 |                
//   ------------------------------------------------------------------
//                   visibility of inherited members

// Single Inheritance

class B {
	int a;   // private not inherit
public:          // public ready for inheritance
	int b;
	void set_a();
	int get_a();
	void show_a();
	void show();
};


class D : public B {          // public inheritance from B
	int c;
public:
	void mul(void);
	void display(void);
};

void B:: set_a(){
	a = 5; b = 10;
}

int B::get_a(){return a;}

void B::show_a(){cout << "a : " << a << "\n";}

void D::mul(){c = b* get_a();}   // get value of private member of A using public function

void D::display(){
	cout << "a : " << get_a() << "\n";   // get value of private member of A using public function
	cout << "b : " << b << "\n";  // public member b of A
	cout << "c : " << c << "\n\n";  // private member of B
}

int main(){
	D d;
	d.set_a();  // access public member function using "." operator
	d.show_a();
	d.display(); 

	d.b = 20;   // access public member using "." operator
	d.mul();
	d.display();

	return 0;
}
