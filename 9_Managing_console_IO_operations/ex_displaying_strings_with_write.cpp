#include <iostream>
#include <cstring>

using namespace std;

int main(){
	char *string1 = "C++ ";
	char *string2 = "Programming";
	int m = strlen(string1);
	int n = strlen(string2);

	for (int i = 0; i < n; i++) {
		cout.write(string2, i);   // write example string with len to print
		cout << "\n";
	}

	for (int i = n; i > 0; i--) {
		cout.write(string2, i);
		std::cout << "\n";
	}

	// concat strings
	cout.write(string1, m).write(string2, n);

	cout << "\n";
	// crossing the boundary
	cout.write(string1, 10); // displays more chars than string1

	return 0;
}
