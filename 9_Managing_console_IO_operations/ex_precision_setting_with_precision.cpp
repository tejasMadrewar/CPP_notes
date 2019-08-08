#include <iostream>
#include <cmath>

using namespace std;

int main(){
	cout << "Precison set to 3 digits\n";
	cout.precision(3);    // set precision

	cout.width(10);
	cout << "VALUE";
	cout.width(15);
	cout << "SQURT_OF_VALUE" <<"\n"; 

	for (int i = 0; i < 5; i++) {
		cout.width(8);
		cout << i;
		cout.width(13);
		cout << sqrt(i) << "\n";
	}

	cout << "\nPrecision set to 5 digit\n";
	cout.precision(5);      // set new precision
	cout << "sqrt(10) = " << sqrt(10) << "\n\n";
	cout.precision(-1);     // reset precision to default value
	cout << "sqrt(10) = " << sqrt(10) << " (default setting)" << "\n\n";

	return 0;
}
