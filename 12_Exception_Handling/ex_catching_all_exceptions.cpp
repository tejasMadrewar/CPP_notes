#include <iostream>

using namespace std;

void test(int x){
	try{
		if (x == 1) throw x;   // int
		if (x == 0) throw 'x';   // char
		if (x == -1) throw 1.0;   // char
	}
	catch(...){ std::cout << "Caught a exceptions" << std::endl; }  // catch all exceptions
}

int main(){
	std::cout << "Testing Genetic catch" << std::endl;

	test(1);
	test(0);
	test(-1);

	return 0;
}
