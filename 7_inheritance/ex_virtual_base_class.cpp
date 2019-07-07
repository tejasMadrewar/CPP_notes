#include <iostream>

class student
{
protected:
	int roll_number;
public:
	void get_number(int a){roll_number = a;}
	void put_number(){
		std::cout << "Roll number: " << roll_number << std::endl;
	}
};


class test : virtual public student   // using virtual keyword student class
{
protected:
	float part1, part2;

public:
	void get_mark(float x, float y){
		part1 = x;
		part2 = y;
	}
	void put_marks(void){
		std::cout << "Marks obtained: \n" 
			"Part1 = " << part1 <<
			"\nPart2 = " << part2 << std::endl;
	}
};

class sports :public virtual student{  // using virtual keyword with student class
protected:
	float score;
public:
	void get_score(float s){
		score = s;
	}
	void put_score(){
		std::cout << "Sport wt: " << score << std::endl;
	}
};

class result : public test, public sports    // student is included one time due to virtual
{
private:
	float total;
public:
	void display(){
		total = part1 + part2 + score;
		put_number();
		put_marks();
		put_score();
		std::cout << "Total score : " << total << std::endl;
	}
};

int main(){
	result student1;
	student1.get_number(678);
	student1.get_mark(30.5, 25.5);
	student1.get_score(7.0);
	student1.display();

	return 0;
}
