#include <iostream>
#include <cstring>

using namespace std;

class XYZ;    // forward declaration

class ABC
{
	int a;

	public:

	void setvalue(int A){a = A;}
	friend XYZ;  // making whole class friend
};

class XYZ
{
	public:
		void getvalue_xyz(ABC x){ cout << x.a;} ; // accessing private member of ABC
};


int main()
{
	ABC a;
	XYZ x;

	a.setvalue(1234);

	x.getvalue_xyz(a);


	
	return 0;
}
