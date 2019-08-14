#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define DEBUG 1

class INVENTORY
{
	char name[10];
	int code;
	float cost;
public:
	void getdata(void){
		cout << "Enter name: "; cin >> name;
		cout << "Enter code: "; cin >> code;
		cout << "Enter cost: "; cin >> cost;
	}

	void putdata(void){
		cout << setw(10) << name
			<< setw(10) << code
			<< setprecision(2) << setw(10) << cost
			<< endl;
	}

};

int main(){
	INVENTORY item;
	fstream inoutfile; // fstream obj
	inoutfile.open("STOCK.DAT", ios::ate | ios::in | ios::out);
	inoutfile.seekg(0, ios::beg);

	cout << "CURRENT CONTENT OF STOCK\n";
	while(inoutfile.read((char*)&item, sizeof(item))){
		item.putdata();
	}
	inoutfile.clear(); // turn of EOF flag

	// add an item
	cout << "\nADD AN ITEM\n";
	item.getdata();
	char ch;
	cin.get(ch);

	inoutfile.write((char*)&item, sizeof(item));

	// display new file
	inoutfile.seekg(0);
	cout << "CONTENT OF APPENDED FILE\n";

#if DEBUG
	cout << inoutfile.tellg();
#endif

	while(inoutfile.read((char*)&item, sizeof(item))){
		item.putdata();
	}

	// find number of obj in file
	int last = inoutfile.tellp();
	int n = last / sizeof(item);
	inoutfile.seekg(ios::beg);

	cout << "Number of objects = " << n << "\n";
	cout << "Total byte in the file = " << last << "\n";
	cout << "Size of object " << sizeof(item) << "\n";

#if DEBUG
	cout << inoutfile.tellg();
#endif
	// modify the details of an item
	cout << "Enter object number to be updated\n";
	int object;
	cin >> object;
	cin >> ch;
	int location = (object-1)*sizeof(item);
	if(inoutfile.eof())
		inoutfile.clear();
	inoutfile.seekg(location);
	cout << "Enter new values of the object\n";
	item.getdata();
	cin.get(ch);
	inoutfile.write((char*)&item, sizeof(item)) << flush; // show updated file
	inoutfile.seekg(0);
	cout << "CONTENT IF UPDATED FILE\n";
#if DEBUG
	cout << inoutfile.tellg();
#endif

	while(inoutfile.read((char*)&item, sizeof(item))){
		item.putdata();
	}

	inoutfile.close();

	return 0;
}
