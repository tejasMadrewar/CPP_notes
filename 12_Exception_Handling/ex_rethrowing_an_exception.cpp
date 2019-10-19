#include <iostream>

using namespace std;


void divide(double x, double y){
	std::cout << "Inside function" << std::endl;
	try{
		if (y == 0) throw y; // throw double
		else {
			std::cout << "Division = "  << x / y << std::endl;
		}
			
	}
	catch(double){ // catch double
		std::cout << "Caught inside function" << std::endl;
		throw;      // rethrowing exception
	}
}

int main(){
	std::cout << "Inside main" << std::endl;
	try{
		divide(10.5, 2.0);
		divide(20.0, 0.0);
	}
	catch(double){
		std::cout << "Caught double inside main" << std::endl;
	}

	std::cout << "End of main" << std::endl;
	return 0;
}
