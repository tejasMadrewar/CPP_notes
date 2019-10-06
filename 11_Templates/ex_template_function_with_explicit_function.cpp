#include <iostream>

using namespace std;

template<class T>
void display(T x){
	cout << "Template Display: " << x << "\n";
}

void display(int x){   // overload generic display
	cout << "Explicit Display: " << x << "\n";
}

int main(){
	display(100);
	display(12.34);
	display('c');
	return 0;
}
