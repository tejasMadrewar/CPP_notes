#include <iostream>

using namespace std;

class person    // class declaration
{
public:
	void getdata(void);   // declare member function
	void display(void);

private:
	char name[30];   // member variable
	int age;
};

void person::getdata(void){   // member function defination ,notedown label person
	cout << "Enter Name:\n";
	cin >> name;
	cout << "Enter Age:\n";
	cin >> age;
}
void person::display(void){
	cout << "\nName :" << name;
	cout << "\nAge :" << age;
}

int main()
{
	person p;    // make object p of class person
	p.getdata(); // access member function
	p.display();
	
	return 0;
}
