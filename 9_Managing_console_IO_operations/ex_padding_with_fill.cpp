#include <iostream>

using namespace std;

int main(){
	cout.fill('<');   // set padding to <
	cout.precision(3);

	for (int i = 1; i <= 6; i++) {
		cout.width(5);
		cout << i;
		cout.width(10);
		cout << 1.0/float(i) << "\n";
		if(i ==3)
			cout.fill('>');   // set padding to >
	}

	cout << "\nPadding changed\n\n";
	cout.fill('#'); // fill(' ') fill reset
	cout.width(15);
	cout << 12.345678 << "\n";

	return 0;
}
