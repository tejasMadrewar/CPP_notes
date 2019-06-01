#include <iostream>
#include <cstring>

using namespace std;

class M
{
	int x,y;
public:
	void set_xy(int a, int b){x =a; y = b;}
	friend int sum(M m);
};

int sum(M m){
	int M::* px = & M::x;  // declare pointer of type int of class M
	int M::* py = & M::y;  // declare pointer of type int of class M
	M *pm = &m;
	int s = m.*px + pm->*py;   // pointer dereferencing
	return s;
}

int main()
{
	M n;

	void (M::*pf)(int,int) = &M::set_xy;  // pointer to member function
	(n.*pf)(10,20);  // dereferencing of pointer to set values
	cout << "sum = " << sum(n) << "\n";

	M *op = &n;  // pointer of class M 
	(op->*pf)(30,40);  // setting value using pointer to object and pointer to member function
	cout << "sum = " << sum(n) << "\n";
	
	return 0;
}
