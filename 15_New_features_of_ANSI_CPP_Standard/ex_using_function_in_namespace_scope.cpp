#include <iostream>

using namespace std;

namespace Functions{
	int divide(int x, int y){ // defination
		return x/y; }
	int prod(int x, int y); // declaration
}

int Functions::prod(int x, int y){
	return (x*y); // qualified
}

int main(){
	using namespace Functions;
	std::cout << "Division : " << divide(20,10) << std::endl;
	std::cout << "Multiplication : " << prod(20,10) << std::endl;

	return 0;
}
