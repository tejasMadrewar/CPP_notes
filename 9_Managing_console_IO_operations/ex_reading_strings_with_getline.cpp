#include <iostream>

using namespace std;

int main(){
	int size = 20;
	char city[20];

	std::cout << "Enter city name: " << std::endl;
	cin >> city;
	std::cout << "City name: "<< city << std::endl << std::endl;

	cin.getline(city, size);
	std::cout << "New city name: " << city << std::endl;

	std::cout << "enter another city name:\n" << std::endl;
	cin.getline(city, size);
	cout << "New city name: " << city << std::endl;

	return 0;
}
