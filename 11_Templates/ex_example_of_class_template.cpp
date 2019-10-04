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
	int x[3] = {1, 2, 3};
	int y[3] = {4, 5, 6};
	vector<int> v1;    // using template for int type
	vector<int> v2;    // using template for int type
	v1 = x;
	v2 = y;

	int R = v1*v2;
	cout << "R = " << R << "\n";
	return 0;
}
