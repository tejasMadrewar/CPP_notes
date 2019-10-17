#include <iostream>

using namespace std;

void divide(int x, int y, int z){
	std::cout << "\nWe are inside the function" << std::endl;
	if ((x -y) != 0) { // it is OK
		int R = z/(x-y);
		std::cout << "Result = "  << R << std::endl;
	}
	else {    // there is a problem
		throw(x-y);   // throw point
	}
}

int main(){
	try{   // try block
		std::cout << "We are inside the try block" << std::endl;
		divide(10, 20, 30); // invoke divide
		divide(10, 10, 30); // invoke divide
	}
	catch(int i){   // catch exception
		std::cout << "Caught the exception" << std::endl;
	}

	return 0;
}
