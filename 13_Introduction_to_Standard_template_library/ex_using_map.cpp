#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<string, int> phoneMap;   // using the map type with string and int as phoneMap

int main(){
	string name;
	int number;
	phoneMap phone;
	std::cout << "Enter three set of name & number" << std::endl;
	for (int i = 0; i < 3; i++) {
		cin >> name;
		cin >> number;
		phone[name] = number;     // adding value to map
	}

	phone["Jocab"] = 4444; // insert jacob
	phone.insert(pair<string, int>("Bose", 5555)); // insert Bose

	int n = phone.size();   // getting size of map
	phoneMap::iterator p;

	for (p = phone.begin(); p != phone.end(); p++){
		std::cout << (*p).first << " "     // key
		       << (*p).second << std::endl;  // value
	}

	std::cout << std::endl;
	std::cout << "Enter name:" << std::endl;
	std::cin >> name;
	number = phone[name];    // find the number of user input name

	std::cout << "Number : " <<  number << std::endl;

	return 0;
}
