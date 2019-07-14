#include <iostream>
#include <cstring>

class person
{
	char name[20];
	float age;
public:
	person(char *s, float a){
		strcpy(name, s);
		age = a;
	}

	person & greater(person& x){  // return reference to person
		if(x.age >= age)
			return x;
		else
			return *this;   // return reference to invoking object
	}

	void display(void){
		std::cout << "Name: " << name << "\n"
		       << "Age :" << age << std::endl;
	}
};

int main(){

	person P1("John", 37.50),
	       P2("Ahmed",29.0),
	       P3("Hebber",40.25);

	person P = P1.greater(P3);
	std::cout << "elder person is \n"; P.display(); 

	P = P1.greater(P2);
	std::cout << "elder person is \n"; P.display(); 

	return 0;
}
