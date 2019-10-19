#include <iostream>

using namespace std;

void test(int x) throw (int, double){  // only int and double can the thrown by function
	if (x ==0)  throw 'x'; // char
	else 
		if (x ==1)  throw x; // int
	else 
		if (x ==-1)  throw 1.0; // double
	std::cout << "End of function block" << std::endl;
		
}

int main(){
	try{
		std::cout << "Testing throw restriction\n" << std::endl;
		std::cout << "x = 0" << std::endl;
		test(0);

		std::cout << "x = 1" << std::endl;
		test(1);

		std::cout << "x = -1" << std::endl;
		test(-1);

		std::cout << "x = 2" << std::endl;
		test(2);
	}
	catch(char c){
		std::cout << "caught a character" << std::endl;
	}
	catch(int i){
		std::cout << "caught a integer" << std::endl;
	}
	catch(double d){
		std::cout << "caught a double" << std::endl;
	}
	std::cout << "End of try catch system" << std::endl;

	return 0;
}
