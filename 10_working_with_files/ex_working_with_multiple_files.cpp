#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ofstream fout;           // create output stream object

	// writing to file
	fout.open("country");    // connect "country"
	fout << "United states of America\n";
	fout << "United kingdom\n";
	fout << "South korea\n";
	fout.close();           // close country file

	// writing to file
	fout.open("capital");   // connect "capital"
	fout << "Washington\n";
	fout << "London\n";
	fout << "Seoul\n";
	fout.close();          // close country file

	// reading file
	const int N = 80;
	char line[N];
	ifstream fin;         // create input object

	fin.open("country");  // connect country
	cout << "Content of country file\n";
	while(fin){           // check end of file
		fin.getline(line, N);    // read line from file
		cout << line << "\n";
	}
	fin.close();

	fin.open("capital");  // connect country
	cout << "Content of capital file\n";
	while(fin){           // check end of file
		fin.getline(line, N);    // read line from file
		cout << line << "\n";
	}
	fin.close();

	return 0;
}
