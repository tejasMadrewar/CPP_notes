#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1("12345");
	string s2("abcde");

	std::cout << "Original strings are:" << std::endl;
	std::cout << "s1:" << s1 << std::endl;
	std::cout << "s2:" << s2 << std::endl << std::endl;

	// inserting a string into another
	std::cout << "Places s2 inside s1" << std::endl;
	s1.insert(4,s2);
	std::cout << "Modified s1: " << s1 << std::endl;

	// Removing characters in a string
	std::cout << "Remove 5 characters form s1" << std::endl;
	s1.erase(4,5);
	std::cout << "Now s1: " << s1 << std::endl;

	// Replace characters in a string
	std::cout << "Replace middle 3 characters in s2 with s1" << std::endl;
	s2.replace(1,3,s1);
	std::cout << "Now s2: " << s2 << std::endl;

	return 0;
}
