#include <iostream>

using namespace std;

// in book only one type was sufficient but to compile it reuire two differnt template types
template<class T1, class T2>             // template class T1 and T2
void swap( T1& x, T2& y){     // function defination
	T1 temp = x;
	x = y;
	y = temp;
}

void fun(int m, int n, float a, float b){
	cout << "m & n before swap : " << m << " " << n << "\n";
	swap(m, n);    // using function template for int
	cout << "m & n after swap  : " << m << " " << n << "\n";

	cout << "a & b before swap : " << a << " " << b << "\n";
	swap(a, b);    // using function template for float
	cout << "a & b after swap  : " << a << " " << b << "\n";
}

int main(){
	fun(100, 200, 11.22, 33.44);

	return 0;
}
