#include <iostream>

class B
{
	int a;    // private members
public:
	int b;     // public members
	void get_ab();
	int get_a();
	void show_a();
};

class D : private B{
	int c;
	public:
	void mul(void);
	void display(void);
};

void B::get_ab(){
	std::cout << "Enter value for a and b" << std::endl;
	std::cin >> a >> b;
}

int B::get_a(){
	return a;
}

void B::show_a(){std::cout << "a : " << a << std::endl;}

void D::mul(void){
	get_ab();
	c = b*get_a();
}

void D ::display(){
	show_a();
	std::cout << "b = "  << b <<"\n" << "c = "  << c <<"\n" << std::endl;
}


int main(){
	D d;
	//d.get_ab(); // won't work
	d.mul();
	//d.show_a();  // won't work
	d.display();
	//d.b = 20;  // won't work
	d.mul();
	d.display();

	return 0;
}
