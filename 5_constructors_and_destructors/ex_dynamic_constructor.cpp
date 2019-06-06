#include <iostream>
#include <string.h>

using namespace std;


// constructor with new
// it will allocate memory at run time according to requirement

class String{

	char *name;
	int length;
public:
	String(){
		length = 0;
		name = new char[length+1];
	}

	String(char *s){
		length = strlen(s);
		name = new char[length+1];  // +1 for null char \0
		strcpy(name, s);
	}

	void display(void){
		cout << name << endl;
	}

	void join(String &a, String &b);
};

void String::join(String &a, String &b){
	length = a.length + b.length;
	delete name;
	name = new char [length+1];      // dynamic allocation
	strcpy(name, a.name);
	strcat(name, b.name);
}

int main(){
	char *first = "Joseph";
	String name1(first), name2(" Louis"), name3(" Lagrange"),s1,s2;

	s1.join(name1, name2);
	s2.join(s1, name3);
	name1.display();
	name2.display();
	name3.display();
	s1.display();
	s2.display();

	
	return 0;
}
