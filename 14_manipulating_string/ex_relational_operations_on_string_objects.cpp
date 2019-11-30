#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1("ABC");
	string s2("XYZ");
	string s3 = s1 + s2;

	if(s1 != s2)
		std::cout << "s1 is not equal to s2" << std::endl;
	if (s1 > s2)
		std::cout << "s1 is greater than s2" << std::endl;
	else
		std::cout << "s2 greater than s1" << std::endl;
		
	if (s3 == s1 + s2)
		std::cout << "s3 is eual to s1+s2\n" << std::endl;
	int x = s1.compare(s2);
	if (x == 0)
		std::cout << "s1 == s2" << std::endl;
	else if (x > 0)
		std::cout << "s1 > s2" << std::endl;
	else
		std::cout << "s1 < s2" << std::endl;

	return 0;
}
