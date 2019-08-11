#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream outf("ITEM"); // connect to file ITEM
	cout << "Enter item name: ";
	char name[30];
	cin >> name;

	outf << name << "\n";  // write to file
	cout << "Enter item cost: ";
	float cost;
	cin >> cost;

	outf << cost << "\n";  // write to file
	outf.close(); // disconnect file from outf

	ifstream inf("ITEM"); // connect to file
	inf >> name;   // read file
	inf >> cost; // read cost form file

	cout << "\n";
	cout << "Item name: ";
	cout << name;
	cout << "\n";
	cout << "Item cost: ";
	cout << cost;

	inf.close();  // close file

	return 0;
}
