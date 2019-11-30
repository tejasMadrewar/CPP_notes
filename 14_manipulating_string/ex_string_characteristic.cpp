#include <iostream>
#include <string>

using namespace std;

void display(string &str){
	std::cout << "Size : " << str.size() << std::endl;
	std::cout << "Length : " << str.length() << std::endl;
	std::cout << "Capacity : " << str.capacity() << std::endl;
	std::cout << "Maximum Size : " << str.max_size() << std::endl;
	std::cout << "Empty : " << (str.empty()?"yes":"no") << std::endl;
	std::cout << std::endl;
}

int main(){
	string str1;
	std::cout << "Initial status : \n" << std::endl;
	display(str1);

	std::cout << "Enter a string (one word)" << std::endl;
	cin >> str1;
	std::cout << "Status now:" << std::endl;
	display(str1);

	str1.resize(16);
	std::cout << "Status after resizing: " << std::endl;
	display(str1);
	std::cout << std::endl;

	return 0;
}
