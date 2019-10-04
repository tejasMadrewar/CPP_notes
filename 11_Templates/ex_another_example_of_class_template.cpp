#include <iostream>

using namespace std;
#define DEBUG 0

const int size = 3;

template<class T>
class vector{
	//int v[size];   // type T vector for before c+11
	T*v = new T[size];   // type T vector   for c++11
public:
	vector(){
		//v = new T[size];
		for (int i = 0; i < size; i++) {
			v[i] = 0;
		}
	}

	vector(T* a){
		for (int i = 0; i < size; i++) {
			v[i] = a[i];
#if DEBUG
			std::cout << "a : " << i << " " <<  a[i] << " ";
			std::cout << "v : " << i << " " <<  v[i]<< std::endl;;
#endif
		}
	}

	T operator*( vector& y){
		T sum = 0;
		for (int i = 0; i < size; i++) {
			sum += this->v[i] * y.v[i];
		}
		return sum;
	}
};

int main(){
	float x[3] = {1.1, 2.2, 3.3};
	float y[3] = {4.4, 5.5, 6.6};
	vector<float> v1;    // using template for float type
	vector<float> v2;    // using template for float type
	v1 = x;
	v2 = y;

	float R = v1*v2;
	cout << "R = " << R << "\n";
	return 0;
}
