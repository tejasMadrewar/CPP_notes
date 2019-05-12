#include <iostream>

using namespace std;

void swap(int & a, int& b){
	int t = a;
	a = b;
	b = t;
}
 void swap_pointer(int *a, int*b){
	int t = *a;
	*a = *b;
	*b = t;

}

int & return_by_reference_max(int &x, int &y){
	if(x > y)
		return x;
	else
		return y;
}

int main()
{
	int a =100, b =300;
	std::cout << "a : " << a << " b: " << b << std::endl;
	swap(a,b);
	std::cout << "a : " << a << " b: " << b << std::endl;

	swap_pointer(&a,&b);
	std::cout << "a : " << a << " b: " << b << std::endl;

	return_by_reference_max(a,b) = -1;
	std::cout << "a : " << a << " b: " << b << std::endl;

	
	return 0;
}
