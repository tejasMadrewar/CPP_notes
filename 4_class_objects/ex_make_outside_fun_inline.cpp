#include <iostream>
#include <cstring>

using namespace std;

class item
{
	int number;
	float cost;
public:
	void getdata(int a, float b);
	void putdata(void);
	int a;
};

inline void item::getdata(int a, float b){ //to make outside function inline used inline keyword
	number = a;
	cost = b;
}

void item::putdata(){
	std::cout << "number = " << number
	<< " cost = " << cost
	<< " a = " << a << std::endl;
}
int main()
{
	item x;   // memory for x is created
	item y,z;
	x.getdata(23,45.7);
	x.a = 1234;
	x.putdata();
	
	return 0;
}
