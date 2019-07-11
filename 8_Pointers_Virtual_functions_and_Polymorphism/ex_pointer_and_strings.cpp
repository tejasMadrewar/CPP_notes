#include <iostream>
#include <string.h>


int main(){
	char str[] = "Test";
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		// different ways to access charactes in string
		std::cout << str[i]
			<< i[str]
			<< *(str+i)
			<< *(i +str);
	}
	std::cout << std::endl;

	// string reverse
	int lenM  = len/2;
	len--;

	for (int i = 0; i < lenM; i++) {
		// swap variables
		str[i]       = str[i] + str[len-i];
		str[len - i] = str[i] - str[len-i];
		str[i]       = str[i] - str[len-i];
	}

	std::cout << "The string reversed "  << 
		str << std::endl;

	return 0;
}
