#include <iostream>

class alpha
{
	int x;
public:
	alpha(int i){
		x = i;
		std::cout << "alpha initialized" << std::endl;
	}

	void show_x(void){ std::cout << "x : " << x << std::endl; }
};

class beta
{
	float y;
public:
	beta(float j){
		y = j;
		std::cout << "beta initialized" << std::endl;
       	}

	void show_y(void){ std::cout << "y : " << y << std::endl; }
};

class gamma: public beta, public alpha   // multiple inheritance
{
	int m, n;
public:
	gamma(int a, float b, int c, int d): alpha(a), beta(b){   // constructor of alpha and beta invoked
		m = c;
		n = d;
		std::cout << "gamma initialized" << std::endl;
	}

	void show_mn(void){
		std::cout << "m : " << m << "\nn : " << n << std::endl;
	}
};

int main(){
	gamma g(5, 10.75, 20, 30);
	g.show_x();
	g.show_y();
	g.show_mn();

	return 0;
}
