#include <iostream>

int main(){
	int number[10], *ptr;
	int n;
	std::cout << "Enter Count : " << std::endl;
	std::cin >> n;

	std::cout << "Enter number one by one" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> number[i];
	}

	ptr = number;  // base add to ptr   

	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (*ptr %2 == 0) {        // check for even
			sum = sum + *ptr;      // add if even
		}
		ptr++;          // increment address
		
	}

	std::cout << "Sum of even number : " << sum << std::endl;

	return 0;
}
