#include <iostream>

using namespace std;


int main()
{
	//
	// enumeated data type
	// attach name to number
	// enum in cpp are local in class/struct 
	// enum in cpp are global in class/struct 
	//
	
	// enum start with 0
	//          0        1        2
	enum shape{circle, square, triangle};
	//          0     4       5    //increment by one
	enum color{red, blue=4, yellow};
	// anonymous enum     same as constant
	enum {off,on};
	// tag name become new data type
	shape ellipse; // ellipse in type shape
	color background; // background in type color

	// int -> enum not allowed
	background = blue;   // allowed
	//background = 7; // error in c++ not in c
	background = (color)7; // correct way in c++

	// enum -> int allowed
	int c = red;

	// enum is used for symbolic constant for switch
	
	cout << "Enter shape code:\n";
	int code;
	cin >> code;

	while(code >= circle && code <= triangle){
		switch(code){
			case circle:
				cout << "Circle code\n\n";
				break;
			case triangle:
				cout << "Triangle code\n\n";
				break;
			case square:
				cout << "Square code\n\n";
				break;
			default:
				cout << "Not defined code\n\n";
				break;
		}
		cout << "Enter shape code:\n";
		cin >> code;
	}

	cout << "bye\n";
	
	return 0;
}
