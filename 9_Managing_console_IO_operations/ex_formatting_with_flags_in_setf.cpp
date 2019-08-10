#include <iostream>
#include <math.h>

using namespace std;

int main(){
	cout.fill('*');
	cout.setf(ios::left, ios::adjustfield);    // setting flag 
	cout.width(10);
	cout << "VALUE ";

	cout.setf(ios::right, ios::adjustfield);    // setting flag 
	cout.width(15);
	cout << "SQRT OF VALUE " << "\n";

	cout.fill('.');
	cout.precision(4);
	cout.setf(ios::showpoint);    // setting flag 
	cout.setf(ios::showpos);    // setting flag 
	cout.setf(ios::fixed, ios::floatfield);    // setting flag 

	for (int n = 1; n <= 10; n++) {
		cout.setf(ios::internal, ios::adjustfield);    // setting flag 
		cout.width(5);
		cout << n;
		cout.setf(ios::right, ios::adjustfield);    // setting flag 
		cout.width(20);
		cout << sqrt(n) << "\n";
	}

	// float field changed
	cout.setf(ios::scientific, ios::floatfield);    // setting flag 
	cout << "\nSQRT(100) = " << sqrt(100) << "\n";

	return 0;
}
