#include <iostream>

using namespace std;


// overloading using friends
// require tow arguments to explicitly passed
//
// A = B + 2 // possible using binary operator
// A = 2 + B // not possible using binary operator


const int size = 3;

class vector
{
	int v[size];
public:
	vector();  // construct null vector  // 1
	vector(int *x); // vector from array // 2
	friend vector operator*(int a, vector b); // friend 1
	friend vector operator*(vector a, int b); // friend 2
	friend istream & operator>>(istream & , vector &); // friend 3
	friend ostream & operator<<(ostream & , vector &); // friend 4
};

vector::vector(){
	for (int i = 0; i < size; i++)
		v[i] = 0;
}

vector::vector(int* x){
	for (int i = 0; i < size; i++)
		v[i] = x[i];
}

vector operator*(int a, vector b){  // friend function defination multiplication
	vector c;
	for (int i = 0; i < size; i++)
		c.v[i] = a*b.v[i];
	return c;
}

vector operator*(vector a, int b){  // friend function defination multiplication
	vector c;
	for (int i = 0; i < size; i++)
		c.v[i] = b*a.v[i];
	return c;
}


istream& operator>>(istream& din, vector &b){  // friend function get input
	for (int i = 0; i < size; i++)
		din >> b.v[i];
	return din;
}

ostream& operator<<(ostream& dout, vector &b){ // friend function get output
	for (int i = 0; i < size; i++)
		dout << b.v[i] << " ";
	return dout;
}

int x[size] = {2, 4, 6};

int main(){
	vector m;      // constructor 1
	vector n = x;  // constructor 2

	cout << "Enter element of vector m \n";

	cin >> m; // invoke >>() friend function
	cout << "\n";
	cout << "m = " << m << "\n"; // invoke <<() friend function

	vector p,q;

	p = 2 * m; // friend 1
	q = n * 2; // friend 2

	cout << "\n";

	cout << "p = " << p << "\n";
	cout << "q = " << q << "\n";

	return 0;

}
