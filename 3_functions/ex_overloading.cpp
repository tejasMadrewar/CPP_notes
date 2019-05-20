#include <iostream>

using namespace std;

// function overloading
// same function name for different purpose

// declaration (prototypes)
int volume(int);
double volume(double, int);
long volume(long, int, int);


int main()
{
	std::cout << volume(10) << std::endl;
	std::cout << volume(2.5, 8) << std::endl;
	std::cout << volume(100L, 75, 15) << std::endl;
	
	return 0;
}

int volume(int s){ // cube
	return (s*s*s);
}
double volume(double r, int h){ // cylinder
	return (3.1415*r*r*h);
}
long volume(long l, int b, int h){ // rectangle block
	return (l*b*h);
}
