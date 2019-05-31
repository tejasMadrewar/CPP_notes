#include <iostream>
#include <cstring>

using namespace std;

class ABC;   // forward declaration

class XYZ{
	int x;

	public:
	void setvalue(int i){x = i;}
	friend void max(XYZ,ABC);     // friend function is declare
};

class ABC{
	int a;

	public:
	void setvalue(int i){a = i;}
	friend void max(XYZ,ABC);   // friend function is declare
};

void max(XYZ m, ABC n){           // function is friend to two classes
	if (m.x >= n.a) {
		cout << m.x;
	}
	else
		cout << n.a;
}


int main()
{
	ABC abc;
	abc.setvalue(10);

	XYZ xyz;
	xyz.setvalue(20);

	max(xyz,abc);    // pass both objects
	
	return 0;
}
