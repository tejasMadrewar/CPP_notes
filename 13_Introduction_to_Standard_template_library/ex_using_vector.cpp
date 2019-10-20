#include <iostream>
#include <vector>

using namespace std;


void display(vector<int> &v){
	for (int i = 0; i < v.size(); i++)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

int main(){
	vector<int> v; // create vector of int
	std::cout << "initial size = "<< v.size() << std::endl;

	// putting value in vector
	int x;
	std::cout << "Enter 5 integer values" << std::endl;
	for (int i = 0; i < 5; i++) {
		cin >> x;
		v.push_back(x);
	}

	std::cout << "size after adding 5 values" << std::endl;
	std::cout << v.size() << std::endl;

	// Display content
	std::cout << "Current content:" << std::endl;
	display(v);

	// add one more value
	v.push_back(6.6);  // truncated to int

	// Display size & content
	std::cout << "\nSize = " << v.size() << std::endl;
	std::cout << "Content now:" << std::endl;
	display(v);

	// inserting elements
	vector<int>::iterator itr = v.begin();    // iterator
	itr = itr + 3;  // iterator points to 4 th element
	v.insert(itr, 1,9);
	
	// Display content
	std::cout << "Content after inserting" << std::endl;
	display(v);

	// Remove
	v.erase(v.begin() + 3, v.begin() + 5);
	// Display content
	std::cout << "Content after deletion" << std::endl;
	display(v);

	std::cout << "END" << std::endl;

	return 0;
}
