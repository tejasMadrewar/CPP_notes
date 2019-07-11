#include <iostream>
#include <string.h>
#include <ctype.h>

int main(){
	int i = 0;
	char *ptr[10] = {       // array of pointers
		"books",
		"television",
		"computer",
		"sports"
	};

	char str[25];

	std::cout << "Enter yout favorite leisure presuit" << std::endl;
	std::cin >> str;
	for (i = 0; i < 4; i++) {
		if (!strcmp(str, ptr[i]) ) {
			std::cout << "Your favorite pursuit" << 
			        " is available here" << std::endl;
			break;
		}
	}

	if (i == 4) {
		std::cout << "Your favorite pursuit" << 
			" is not available here" << std::endl;
	}


	return 0;
}
