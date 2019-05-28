#include <iostream>

using namespace std;

// static member function
// can access only other static members
// called using class name instead of objects
//
// class_name::function_name();

class test
{
	int code;
	static int count;   // static member
public:
	void setcode(void){code = ++count;}
	void showcode(void){cout << "Object number : " << code << "\n";}

	static void showcount(void){   // static member function
		cout << "Count : " << count << "\n";
	}

//      below code will not work as static member function can only access static members
//	static void showcount_1(void){   // static member function
//		cout << code << "\n";
//	}

};

int test::count;       // static member definition

int main(){
	test t1,t2;

	t1.setcode();
	t2.setcode();

	test::showcount();  // access static function
	test t3;
	t3.setcode();

	test::showcount();  // access static function
	t1.showcode();
	t2.showcode();
	t3.showcode();

	return 0;
}
