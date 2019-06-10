#include <iostream>

using namespace std;

class invent2;   // destination class decalred // forward declaration

class invent1  // source class
{
	int code;  // item code
	int items; // number of items
	float price; // cost of each item

public:
	invent1(int a, int b, float c){code = a; items = b, price = c;}

	void putdata(){
		cout << "Code : " << code << "\n";
		cout << "Items : " << items << "\n";
		cout << "Value : " << price << "\n";
	}
	
	int getcode(){return code;}
	int getitems(){return items;}
	float getprice(){return price;}

	operator float(){return (items*price);}   // casting operator invent2 -> float

	/*operator invent2(){  // invent1 -> invent2
		invent2 temp;
		temp.code = code;
		temp.value = price*items;
		return temp;
	}*/

};

class invent2 {  // destination class
	int code;
	float value;
public:
	invent2(){code = 0; value = 0;}
	invent2(int x, float y){code = x, value = y;}
	void putdata(){
		cout << "Code : " << code << "\n";
		cout << "Value : " << value << "\n";
	}

	invent2(invent1 p){  // constructor for conversion invent1 -> invent2
		code = p.getcode();
		value = p.getitems() * p.getprice();
	}
};


int main(){
	invent1 s1(100, 5, 140.0);
	invent2 d1;
	float total_value;

	// invent1 -> float
	total_value = s1;

	// invent1 -> invent2
	d1 = s1;

	cout << "Product details - invent1 type" << "\n";
	s1.putdata();
	cout << "\nstack value" << "\n";
	cout << "value = " << total_value << "\n\n";

	cout << "Product details - invent2 type" << "\n";
	d1.putdata();

	return 0;

}
