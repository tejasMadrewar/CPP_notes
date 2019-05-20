#include <iostream>

using namespace std;

//
// const arguments
// arguments can not be changed inside the functions
//

int strlen(const char *p);


int main(int argc, const char *argv[])
{
	char * input = "String test";
	std::cout << "Length of '" << input << "' is " << strlen(input) << std::endl;
	
	return 0;
}

// string value can not be changed inside function as it is constant
int strlen(const char *p){
	int len = 0;
	while( *p != '\0'){
		p++;
		len++;}
	return len;
}
