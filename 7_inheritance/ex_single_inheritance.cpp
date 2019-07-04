#include <iostream>

class B
{
	int a;     // private not inherited
public:           // ready for inheritance
	int b;
	void get_ab(void);
	int get_a(void);
	void show_a(void);

};

class D : public B    // single inheritance
{
	int c;
public:
	void mul(void);
	void display(void);
};

void B::get_ab(){
	a = 5;
	b = 10;
}

int B::get_a(){ return a;}

void B::show_a(){
	std::cout << "a : " << a << std::endl; // access a directly
}

void D::mul(){
	c = b * get_a();
}

void D::display(){
	std::cout << "a : " << get_a() << std::endl; // access private date using public function
	std::cout << "b : " << b << std::endl;
	std::cout << "c : " << c << std::endl;
}


int main(){
	D d;
	d.get_ab();
	d.mul();
	d.show_a();
	d.display();

	d.b = 20;
	d.mul();
	d.display();

	return 0;
}
