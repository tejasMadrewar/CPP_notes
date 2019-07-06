#include <iostream>

class M
{
public:
	void display(void){   // display
		std::cout << "Class M\n" << std::endl;
	}
};

class N
{
public:
	void display(void){   // display
		std::cout << "Class N\n" << std::endl;
	}
};

class P: public M, public N
{
public:
	void display(void){   // Overrides display
		M::display();    // sccope resolution operator
	}

};

int main(){
	P p;
	p.display();

	return 0;
}
