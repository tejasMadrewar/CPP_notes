#include <iostream>
#include <string.h>

using namespace std;

//----------------------------------------------------------------------
//| Type conversions    |                                              |  
//| conversions         |         conversion takes place in            |   
//| required            |                                              |    
//|*********************************************************************
//| basic -> class      |   Not applicable     |   Constuctor          |    
//| -------------------------------------------------------------------| 
//| class -> basic      |   Casting operator   |   Not applicable      |     
//| -------------------------------------------------------------------| 
//| class -> class      |   Casting operator   |   Constuctor          |     
//----------------------------------------------------------------------
//


class String
{
	char *p;
	int len;
public:
	String(){len = 0; p = 0;} // null string
	String(const char *s);    // conversion from char* -> String

	friend void show(const String s);
};

String::String(const char *s){
	len = strlen(s);
	p = new char[len+1];  // +1 null char
	strcpy(p, s);
}

void show(const String s){
	cout << s.p;
}

int main(){
	String s1, s2;
	const char* name1 = "IBM PC";
	const char* name2 = "Apple Computers";
	s1 = String(name1);  // conversion from const char * -> String
	s2 = name2;          // conversion from const char * -> String

	show(s1);
	cout << "\n";
	show(s2);


	return 0;

}
