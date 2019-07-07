#include <iostream>

class alpha
{
	int x;
public:
	alpha(int i){
		x = i;
		std::cout << "alpha initialized" << std::endl;
	}
	void show_alpha(void){
		std::cout << "x : " << x << std::endl;
	}
};

class beta
{
	float p, q;
public:
	beta(float a, float b):p(a),q(a+b){   /// init list in constructor
		std::cout << "beta initialized" << std::endl;
	}
	void show_beta(void){
		std::cout << "p : " << p << std::endl
			<< "q : " << q << std::endl;
	}
};


class gamma: public beta, public alpha
{
	int u, v;
public:
	gamma(int a, int b, float c): alpha(a*2), beta(c, c), u(a){  // init list in constructor
		v = b;
		std::cout << "gamma initialized" << std::endl;
	}

	void show_gamma(void){
		std::cout << "u : " << u << std::endl;
		std::cout << "v : " << v << std::endl;
	}
};

int main(){
	gamma g(2, 4, 2.5);  // invoking constructor of gamma
	// above constructor take only 3 parameter which initialize 5 data members
	std::cout << "\n\nDisplay member values" << std::endl;
	g.show_alpha();
	g.show_beta();
	g.show_gamma();

	return 0;
}
