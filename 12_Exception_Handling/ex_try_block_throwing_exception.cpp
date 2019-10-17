#include <iostream>

using namespace std;


int main(){
	int a,b;
	cout << "Enter value of a & b\n";
	cin >> a;
	cin >> b;
	int x = a - b;

	// start of try block
	try{
		if(x!=0){
			cout << "Result (a/x) = " << a / x << "\n";
		}
		else { // there is an exception 
			throw(x); // throw int object
		}
	}
	catch(int i){ // catch block
		cout << "Exception caught : x = " << x << "\n";
	}
	cout << "END";

	return 0;
}
