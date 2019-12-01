#include <iostream>

using namespace std;

// Defining namespace
namespace Name1{
	double x = 4.56;
	int m = 100;
	namespace Name2{ // Nesting
		double y = 1.23;
	}
}

namespace Name3{
	int m = 200;
	int n = 300;
}

int main(){
	using namespace Name1; // bring member of Name1 to current scope
	std::cout << "x = " << x << std::endl; // x is not qualified
	std::cout << "m = " << m << std::endl;
	std::cout << "y = " << Name2::y << std::endl; // y is qualified

	using Name3::n; // bring n to current scope

	std::cout << "m = " << Name3::m << std::endl; // m is qualified
	std::cout << "n = " << n << std::endl; // n is not qualified

	return 0;
}
