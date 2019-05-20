#include <iostream>

using namespace std;

// default arguments
// they are set while function declaration

int main(int argc, const char *argv[])
{
	float amount;

	//prototype
	float value(float p,int n,float r=0.15);
	void printline(char ch='*',int len=40);

	printline();
	amount = value(5000.00,5);
	std::cout << "\n find value = " << amount << "\n" << std::endl;
	printline('=');
	
	return 0;
}

// function definition
float value(float p,int n,float r){
	int year = 1;
	float sum = p;
	while(year <=n){
		sum = sum*(1+r);
		year = year + 1;
	}

	return sum;
}

void printline(char ch,int len){
	for (int i = 0; i <= len; i++) {
		printf("%c",ch);
	}
	printf("\n");
}
