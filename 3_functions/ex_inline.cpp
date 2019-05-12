#include <iostream>

using namespace std;

// if function is small then overhead in calling increases
// alternative is macro but error checking is not done
//
// inline function is a function that expanded in line when it is invoked.
// must defined before called
// they are made inline when they are small enough to be defined in one or two lines
//
//
// inline function  may not work
// if returning value, if loop switch exists
// if not returning value, if return statement exists
// recursive
//

inline double cube(double a){ return (a*a*a);}

inline float mul(float x, float y){return (x*y);}
inline double div(double x, double y){return (x/y);}

int main()
{
	std::cout << cube(3.0) << std::endl;
	std::cout << cube(2.5 + 1.5) << std::endl;  // macro fails

	float a = 12.345;
	float b = 9.35;
	std::cout << mul(a,b) << std::endl;
	std::cout << div(a,b) << std::endl;
	
	return 0;
}
