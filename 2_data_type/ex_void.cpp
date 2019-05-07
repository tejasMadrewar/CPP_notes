#include <iostream>

using namespace std;


int main()
{

	int a = 34;
	void *gp;    // generic pointer
	int *ip;     // integer pointer

	ip = &a;
	gp = ip;   // valid

	//*ip = *gp;  // illigal deref void pointer
	
	void *ptr1;
	char *ptr2;
	
	//ptr2 = ptr  // valid in c not in c++1
	
	ptr2 = (char*)ptr1;  // correct way in cpp

	
	return 0;
}
