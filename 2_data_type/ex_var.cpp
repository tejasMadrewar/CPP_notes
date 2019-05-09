#include <iostream>
#include<cstring>

using namespace std;

void f_value(int * x){
	*x = *x + 10;
}

void f_reference(int & x){
	x = x + 10;
}

int main()
{
	// declaration at anywhere in cpp
	// declaration requires at beginning of scope

	char const * name = "Test";
	// Dynamic init of variables
	
	int n = strlen(name);
	int rad = 10;
	float area = 3.14259 * rad * rad;


	//
	// reference variable
	// can be used for objects and structures
	//
	float total = 100;
	float &sum = total;

	cout << "Total : " << total << " Sum : " << sum << endl;
	sum = sum + 10;
	cout << "sum = sum + 10" << endl;
	cout << "Total : " << total << " Sum : " << sum << endl;
	total = total + 200;
	cout <<"total = total + 200" << endl;
	cout << "Total : " << total << " Sum : " << sum << endl;

	const char & s = name[1];
	cout << s << endl;

	int x = 101;
	int *p = &x;
	int &m = *p;


	// pass as value
	f_value(&x);
	cout << "x : " << x << endl;
	
	// pass by reference
	f_reference(x);
	cout << "x : " << x << endl;
	return 0;
}
