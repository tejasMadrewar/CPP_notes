#include <iostream>

using namespace std;

// similar to c static variable
// init to 0 when first objects of its class created, no other init is permitted
// only one copy for entire class and shared by all objects of that class, no mater how many objects are created.
// visible only in class, life time is entire program
// used to maintain common value to entire class
//
// type and scope of static member must be defined outside of class
// static member stored separately rather than as a part of object
// they are known as class variables

class item
{
	static int count;   // static data member declaration
	int number;
	
public:
	void getdata(int a){ number = a; count++;}
	void getcount(void){
		cout << "Count : ";
		cout << count << "\n";
	}

};

int item::count;   // initialize static variable // definition of static variable

int main(){
	item a, b, c;
	a.getcount();
	b.getcount();
	c.getcount();

	a.getdata(100);
	b.getdata(200);
	c.getdata(300);

	cout << "After reading data \n";

	a.getcount();
	b.getcount();
	c.getcount();

	return 0;
}
