#include <iostream>
#include <string.h>

using namespace std;


class String
{
	char *p;
	int len;
public:
	String(){len = 0; p = 0;} // null string
	String(const char *s);    //from array of char
	String(const String& s); // copy constructor
	~String(){delete p;} // destructor

	// + operator
	friend String operator+(const String& s, const String& t);

	// <= operator
	friend int operator<=(const String& s, const String& t);

	friend void show(const String s);
};

String::String(const char *s){
	len = strlen(s);
	p = new char[len+1];  // +1 null char
	strcpy(p, s);
}

String::String(const String& s){
	len = s.len;
	p = new char[len+1];
	strcpy(p, s.p);
}

// overloading + operator
String operator+(const String& s, const String& t){
	String temp;
	temp.len = s.len + t.len;
	temp.p = new char[temp.len + 1];
	strcpy(temp.p, s.p);
	strcat(temp.p, t.p);

	return temp;
}

// overloading <= operator
int operator<=(const String& s, const String& t){
	int m = strlen(s.p);
	int n = strlen(t.p);
	if(m <= n) return(1);
	else return(0);
}

void show(const String s){
	cout << s.p;
}

int main(){
	String s1 = "New ";
	String s2 = "York";
	String s3 = "Delhi";
	String t1, t2, t3;
	t1 = s1;
	t2 = s2;
	t3 = t1 + t2;

	cout << "\nt1 "; show(t1);
	cout << "\nt2 "; show(t2);
	cout << "\n"; 
	cout << "\nt3 "; show(t3);
	cout << "\n\n";

	if(t1 <= t3){
		show(t1);
		cout << "Smaller than ";
		show(t3); cout << "\n";
	}
	else{
		show(t3);
		cout << "Smaller than ";
		show(t1); cout << "\n";
	}


	return 0;

}
