#include <iostream>

using namespace std;

int main(){
	int item[4] = {10, 8, 12, 15};
	int cost[4] = {75, 100, 60, 99};

	cout.width(5);    // set field width
	cout << "ITEMS";

	cout.width(8);  // set field width
	cout << "COST";

	cout.width(15);  // set field width
	cout << "TOTAL VALUE" << "\n";
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		cout.width(5);
		cout << item[i];
		
		cout.width(8);
		cout << cost[i];

		cout.width(15);
		int value = item[i]*cost[i];
		cout << value;

		cout << "\n";
		sum = sum + value;

	}

	std::cout << "\nGrand Total : ";
	cout.width(2);
	std::cout << sum << std::endl;   // value is not truncated


	return 0;
}
