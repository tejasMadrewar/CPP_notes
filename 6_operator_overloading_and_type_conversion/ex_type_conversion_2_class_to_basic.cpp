#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class vector
{
	int v[3];
public:
	vector(int a, int b, int c){
		v[0]= a; 
		v[1]= b; 
		v[2]= c;}
	operator double(){    // casting operator convert from vector -> double
		double sum = 0;
		for (int i = 0; i < 3; i++)
			sum = sum + v[i]* v[i];
		return sqrt(sum);
	}
	void show(){
		cout << v[0] << " " << v[1] << " " << v[2] << "\n";
	}

};


int main(){
	vector a(1,2,3);
	double length;
	length = a;   // coversion from class to basic ie vector to double

	cout << "vector =";
	a.show();

	cout << "double =";
	cout << length;

	return 0;

}
