#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

#define DEBUG 0

int main(){
	char string[80];
	cout << "Enter a string\n";
	cin >> string;
	int len = strlen(string);
	
	fstream file;
	file.open("TEXT", ios::in|ios::out | ios::trunc);  // setting the flags for file

	for (int i = 0; i < len; i++){
#if DEBUG
		cout << "\n" << file.tellg(); 
#endif
		file.put(string[i]);  // put char
	}
	file.seekg(0);   // go to start
	char ch;
	while(file){
#if DEBUG
		cout << "\n" << file.tellg() << " "; 
#endif
		file.get(ch); // get char
		cout << ch;   // display
		ch = '\0';
	}

	return 0;
}
