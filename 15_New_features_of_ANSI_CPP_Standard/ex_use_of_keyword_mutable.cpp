#include <iostream>

using namespace std;

class ABC
{
private:
	mutable int m;   // this is mutable datatype
public:
	explicit ABC(int x = 0){   // explicit constructor
		m = x;
	}

	void change()const{ // const function
		m = m + 10;
	}

	int display()const{ // const function
		return m;
	}

};

int main(){
	const ABC abc(100); // const object
	std::cout << "abc contain: " << abc.display() << std::endl;

	abc.change();  // change m value of const obj abc
	std::cout << "\nabc now contains: " << abc.display() << std::endl;
	std::cout << std::endl;

	return 0;
}
