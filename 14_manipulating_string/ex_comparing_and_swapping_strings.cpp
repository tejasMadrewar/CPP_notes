#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1("Road");
	string s2("Read");
	string s3("Red");

	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;
	std::cout << "s3 = " << s3 << std::endl;

	int x = s1.compare(s2);
	if (x == 0)
		std::cout << "s1 == s2 " << std::endl;
	else if ( x > 0)
		std::cout << "s1 > s2" << std::endl;
	else
		std::cout << "s1 < s2" << std::endl;

	int a = s1.compare(0, 2, s2, 0, 2);
	int b = s2.compare(0, 2, s1, 0, 2);
	int c = s2.compare(0, 2, s3, 0, 2);
	int d = s2.compare(s2.size() -1 , 1, s3, s3.size()-1, 1);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "d = " << d << std::endl;

	std::cout << "\nBefore swap" << std::endl;
	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;
	s1.swap(s2); // swaps content
	std::cout << "\nAfter swap" << std::endl;
	std::cout << "s1 = " << s1 << std::endl;
	std::cout << "s2 = " << s2 << std::endl;

	return 0;
}
