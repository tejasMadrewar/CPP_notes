#include <iostream>

using namespace std;

int main(){
	int x1 =10, x2 = 20, m = 2;
	bool b1,b2;

	b1 = x1 == x2;    // False
	b2 = x1 < x2;    // True

	std::cout << "b1 is " << b1 << std::endl;
	std::cout << "b2 is " << b2 << std::endl;

	bool b3 = true;
	std::cout << "b3 is " << b3 << std::endl;

	if (b3) 
		std::cout << "Very Good" << std::endl;
	else
		std::cout << "Very Bad" << std::endl;

	int x3 = false + 5*m - b3;
	b1 = x3;
	b2 = 0;
	std::cout << "x3 = " << x3 << std::endl;
	std::cout << "Now b1 = " << b1 << " and b2 = " << b2 << std::endl;

	return 0;
}
