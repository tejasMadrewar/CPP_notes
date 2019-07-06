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


class test : public student   // single inheritance
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

class sports {
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

class result : public test, public sports    // hybrid inheritance
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
	student1.get_number(1234);
	student1.get_mark(27.5, 33.0);
	student1.get_score(6.0);
	student1.display();

	return 0;
}
