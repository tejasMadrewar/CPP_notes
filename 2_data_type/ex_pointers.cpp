#include <iostream>

using namespace std;

// pointers

int main()
{
	int i = 34;
	int *ip;
	ip = &i;
	*ip = 10;

	// cpp adds concept constant pointer and pointer to constant
	//
	
	// constant pointer
	char * const ptr1 = "Good";    // address can not be modified

	// pointer to constant
	int const * ptr2 = &i;   // address can change, not content

	// constant pointer & variable constant
	const char *const cp = "xyz"; // both address and content can not be modified
	
	return 0;
}
