#include <iostream>

using namespace std;


// local classes
// local classes can use global varibles and static varibles declared inside the function but cannot use automatic local variables. The gloabl variables should be used with scope operator(::)
// they can not have static data members and function must be defined inside the local classes. enclosing the function can not access the private memers of a local classes. However we can achieve this by declaring the enclosing function as a friend.


void test(){

	// local class
	class student
	{
		int r_num;
	public:
		student(int x){r_num = x;}
		void display(){cout << r_num;}

	};
	// local class end
	int a = 345;
	student s1(a);
	s1.display();
	
}

int main()
{
	//student s2;  // as class is local to function test this is not valid
	test();
	
	return 0;
}
