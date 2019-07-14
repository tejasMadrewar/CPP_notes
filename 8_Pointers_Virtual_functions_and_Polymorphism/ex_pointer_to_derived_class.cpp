#include <iostream>

class BC{
	public:
		int b;
		void show(){ std::cout << "b = " << b << std::endl; }
};

class DC:public BC{
	public:
		int d;
		void show(){ std::cout << "b = " << b  << "\n"
				<< "d = " << d << std::endl; }
};

int main(){
	BC *bptr; // base pointer
	BC base;   // base object
	bptr = & base;

	bptr->b = 100; // access BC via bptr
	std::cout << "bptr points to base object" << std::endl;
	bptr->show();

	// derived class
	DC derived;
	bptr = & derived; // address of derived
	bptr->b = 200; // access DC via bptr

	// bptr->d = 300; // won't work
	std::cout << "bptr now points to derived object" << std::endl;

	bptr->show(); // bptr points to derived

	// access d using point to derived
	DC *dptr; // derived type pointer
	dptr = & derived;
	dptr->d = 300;

	std::cout << "dptr is derived type pointer" << std::endl;
	dptr->show();
	// cast bptr to derived pointer type
	std::cout << "using ((DC*)bptr)" << std::endl;
	((DC*)bptr)->d = 400;
	((DC*)bptr)->show();

	return 0;
}
