#include <iostream>


class student
{
protected:
	int roll_number;    // protected member direcly inherited class can access
public:
	void get_number(int);
	void put_number(void);
};

void student::get_number(int a){roll_number = a;}
void student::put_number(){
	std::cout << "Roll number : " << roll_number << std::endl;
}

class test: public student  // single inheritance
{
protected:
	float sub1;
	float sub2;
public:
	void get_marks(float, float);
	void put_marks(void);
};

void test::get_marks(float a, float b){
	sub1 = a;
	sub2 = b;
}

void test::put_marks(void){
	std::cout << "marks in sub1 :" << sub1 << std::endl;
	std::cout << "marks in sub2 :" << sub2 << std::endl;
}

class result: public test  // multilevel inheritance
{
	float total;
public:
	void display(void);
};

void result::display(void){
	total = sub1 + sub2;
	put_number();
	put_marks();
	std::cout << "Total : " <<  total << std::endl;
}

int main(){
	result student1;
	student1.get_number(111);
	student1.get_marks(75.0, 59.5);

	student1.display();

	return 0;
}
