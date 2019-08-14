#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

#define DEBUG 1

int number[9] = {11,22,33,44,55,66,77,88,99};

int main(int argc, char* argv[]){  // passing arguments to the program
	if(argc != 3){
		cout << "argc = " << argc << "\n";
		cout << "Error in arguments\n";
		exit(1);
	}

	ofstream fout1, fout2;

	fout1.open(argv[1]);   // opening file
	if(fout1.fail()){
		cout << "Could not open the file" << argv[1] << "\n";
		exit(1);
	}

	fout2.open(argv[2]);   // opening file
	if(fout1.fail()){
		cout << "Could not open the file" << argv[2] << "\n";
		exit(1);
	}

	for (int i = 0; i < 9; i++) {
		if(number[i] %2 == 0){
			fout2 << number[i] << " "; // Even number
		}
		else{
			fout1 << number[i] << " "; // odd number
		}
		
	}

	fout1.close();
	fout2.close();
	ifstream fin;
	char ch;

	for (int i = 0; i < argc; i++) {
		fin.open(argv[i]);
		cout << "Content of " << argv[i] << "\n";
		do{
			fin.get(ch); // read char
			cout << ch;  // print
			ch = '\0';
		}while(fin);

		cout << "\n";
		fin.close();
	}
	return 0;
}
