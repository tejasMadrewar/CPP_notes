#include <iostream>
#include <cstring>

class city
{
protected:
	char *name;
	int len;
public:
	city(){
		len = 0;
		name = new char[len];
	}

	void getname(void){
		char *s;
		s = new char[30];
		std::cout << "Enter city name :" << std::endl;
		std::cin >> s;
		len = strlen(s);
		name = new char[len+1];
		strcpy(name, s);
	}

	void printname(void){
		std::cout << name << std::endl;
	}

};

int main(){
	city *cptr[10];  // array of 10 poiinters to city
	int n = 1;
	int option;

	do{
		cptr[n] = new city; // create city  // new city object
		cptr[n]->getname();   // invoke object member function
		std::cout <<  std::endl;

		n++;
		std::cout << "do you want to enter one more name ?" << std::endl;
		std::cout << "(Enter 1 for yes 0 for no):" << std::endl;
		std::cin >> option;

	}while(option);

	std::cout << "\n\n";
	for (int i = 1; i <= n; i++) {
		cptr[i]->printname();    // invoke printname for all cities
	}

	return 0;
}
