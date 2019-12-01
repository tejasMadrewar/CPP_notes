#include <iostream>

using namespace std;

// Defininf a namespace
namespace Name1{
	double x = 4.56;
	int m = 100;
	namespace Name2{  // Nesting namespaces
		double y = 1.23;
	}
}

namespace{ // Unnamed namespace
	int m = 200;
}

int main(){
	std::cout << "x = " << Name1::x << std::endl;   // x is qualified
	std::cout << "m = " << Name1::m << std::endl;
	std::cout << "y = " << Name1::Name2::y << std::endl; // y is fully qualified
	std::cout << "m = " << m << std::endl;

	return 0;
}
