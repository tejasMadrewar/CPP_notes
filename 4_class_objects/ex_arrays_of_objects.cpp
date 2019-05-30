#include <iostream>

using namespace std;

class employee {
	char name[20];
	float age;
public:
	void getdata(void);
	void putdata(void);

};

void employee::getdata(void){
	cout << "Enter Name :";
	cin >> name;
	cout << "Enter age :";
	cin >> age;
}

void employee::putdata(void){
	cout << "Name : " << name << "\n";
	cout << "age : " << age << "\n";
}


const int size = 3;

int main()
{
	employee manager[size];   // arrays of objects
	for (int i = 0; i < size; i++) {
		cout << "\nDetails of manager " << i + 1 << "\n";
		manager[i].getdata();         // accessing member of array
	}

	cout << "\n";

	for (int i = 0; i < size; i++) {
		cout << "\nManager " << i + 1 << "\n";
		manager[i].putdata();         // accessing member of array
	}

	
	return 0;
}
