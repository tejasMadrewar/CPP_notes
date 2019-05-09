#include <iostream>

using namespace std;

int m = 10;  // global scope

int main(){
	int m = 20; // local to main
	{
		int k = m;   // local to main
		int m = 30; // local to inner block

		cout << "We are in inner block\n";
		cout << "k = " << k << "\n";
		cout << "m = " << m << "\n";
		// ::m always refer to global m
		cout << "::m = " << ::m << "\n";
	}
	cout << "We are in outer block\n";
	cout << "m = " << m << "\n";
	cout << "::m = " << ::m << "\n";

	return 0;
}
