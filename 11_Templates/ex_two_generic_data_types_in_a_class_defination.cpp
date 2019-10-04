#include <iostream>

using namespace std;

template< class T1, class T2>
class Test
{
public:
	Test(T1 x, T2 y){
		a = x;
		b = y;
	}
	void show(){
		cout << a << " and " << b << " \n";
	}

private:
	T1 a;   // declaring var of type T1
	T2 b;   // declaring var of type T2
};

int main(){
	// using same template for two differnt var type

	Test <float, int> test1(1.23, 123);
	Test <int, char> test2(100, 'w');

	test1.show();
	test2.show();

	return 0;
}
