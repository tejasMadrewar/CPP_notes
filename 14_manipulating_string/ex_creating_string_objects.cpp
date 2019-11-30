#include <iostream>
#include <string>

using namespace std;

int main(){
	// creating string objects
	string s1; // empty string object
	string s2("New"); // using string constant
	string s3(" Delhi"); // using string constant

	// Assigning values to string objects
	s1 = s2; // using string object
	cout << "s1 = " << s1 << "\n";

	// using a string constant
	s1 = "Standard C++ ";
	std::cout << "Now s2 = " << s1 << std::endl;

	// using another object
	string s4(s1);
	std::cout << "s4 = " << s4 << std::endl;

	// Reading through keyboard
	std::cout << "Enter a string\n" << std::endl;
	std::cin >> s4;// Delimited by blank space
	std::cout << "Now s4 = " << s4 << std::endl;

	// concatenating strings
	s1 = s2 + s3;
	std::cout << "s1 finally contains: " << s1 << std::endl;

	return 0;
}
