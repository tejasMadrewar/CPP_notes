#include <iostream>
#include <string>

using namespace std;

int main(){
	string s("ONE TWO THREE FOUR");
	std::cout << "The string contains: " << std::endl;
	for (int i = 0; i < s.length(); i++)
		std::cout << s.at(i); // display char

	std::cout << "\nString is shown again:" << std::endl;
	for (int i = 0; i < s.length(); i++)
		std::cout << s[i];

	int x1 = s.find("TWO");
	std::cout << "\n\nTWO is found at : " << x1 << std::endl;

	int x2 = s.find_first_of("T");
	std::cout << "\nT is found first at : " << x2 << std::endl;

	int x3 = s.find_last_of("R");
	std::cout << "\nR is last found at : " << x3 << std::endl;

	std::cout << "\nRetirve & print substring TWO" << std::endl;
	std::cout << s.substr(x1,3) << std::endl;
		

	return 0;
}
