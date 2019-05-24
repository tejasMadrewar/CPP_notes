#include <iostream>
#include <cstring>

using namespace std;

// c structure
//
// limitation
// - not treated like build in types
// - not permit data hiding   that is all data is public

struct student{
	char name[20];
	int roll_number;
	float total_marks;
};


int main()
{
	// make structure
	struct student A;
	float final_total = 0;

	// cpp extension
	student B;    // c++ declaration

	// access member using dot or period
	strcpy(A.name , "John");
	A.roll_number = 999;
	A.total_marks = 595.5;
	final_total = A.total_marks + 5;
	
	return 0;
}
