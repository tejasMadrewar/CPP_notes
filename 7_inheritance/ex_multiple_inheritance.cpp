#include <iostream>

class M
{
protected:
	int m;
public:
	void get_m(int);
};

class N
{
protected:
	int n;
public:
	void get_n(int);
};

class P: public M, public N    // multiple inheritance from class M and N
{
public:
	void display(void);
};

void M::get_m(int x){m = x;}
void N::get_n(int y){n = y;}

void P::display(void){
	std::cout << "m : " << m  << "\n"
		<< "n : " << n  << "\n"
		<< "m*n = " << m*n
		<< std::endl;
}

int main(){
	P p;
	p.get_m(10);
	p.get_n(20);
	p.display();

	return 0;
}
