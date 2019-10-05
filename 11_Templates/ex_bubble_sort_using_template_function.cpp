#include <iostream>

using namespace std;

template<class X1, class X2>           // template 
void swap( X1& x, X2& y){
	cout << "aaaaaaa";
	X1 temp = x;
	x = y;
	y = temp;
}


template<class T>           // template 
void bubble(T a[], int n){
	for (int i = 0; i < n-1; i++)
		for (int j = n-1; i < j; j--)
			if(a[j] < a[j-1])
				swap(a[j], a[j-1]);
}


int main(){
	int x[5] = {10, 50, 30, 40, 20};
	float y[5] = {1.1, 2.2, 3.3, 4.4, 2.2};

	bubble(x,5);     // bubble sort for int
	bubble(y,5);     // bubble sort for float

	for (int i = 0; i < 5; i++)
		cout << x[i] << " ";
	cout << "\n";
		
	for (int i = 0; i < 5; i++)
		cout << y[i] << " ";
	cout << "\n";

	return 0;
}
