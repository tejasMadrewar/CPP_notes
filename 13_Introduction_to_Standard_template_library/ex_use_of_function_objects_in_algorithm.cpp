#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
	int x[]={10, 50, 30, 40, 20};
	int y[]={70, 90, 60, 80};
	sort(x, x+5, greater<int>());   // function object greater<int>()
	sort(y, y+4);   // function object greater<int>()

	for (int i = 0; i < 5; i++)
		std::cout << x[i] << " ";
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		std::cout << y[i] << " ";
	std::cout << std::endl;

	int z[9];
	merge(x, x+5, y, y+4, z);
	for (int i = 0; i < 9; i++)
		std::cout << z[i] << " ";
	std::cout << std::endl;

	return 0;
}
