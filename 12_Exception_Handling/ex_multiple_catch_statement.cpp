#include <iostream>

using namespace std;

void test(int x){
	try{
		if (x == 1) throw x;   // int
		else if (x == 0) throw 'x';   // char
		else if (x == -1) throw 1.0;   // char
		cout << "End of try block\n";
	}
	catch(char c){ std::cout << "Caught a charater" << std::endl; }
	catch(int m){ std::cout << "Caught a integer" << std::endl; }
	catch(double d){ std::cout << "Caught a double" << std::endl; }

	std::cout << "End of try-catch system\n" << std::endl;
}

int main(){
	std::cout << "Testing multiple catches" << std::endl;

	std::cout << "x == 1" << std::endl;
	test(1);

	std::cout << "x == 0" << std::endl;
	test(0);

	std::cout << "x == -1" << std::endl;
	test(-1);

	std::cout << "x == 2" << std::endl;
	test(2);


	return 0;
}
