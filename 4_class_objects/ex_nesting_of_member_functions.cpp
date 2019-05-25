#include <iostream>

class set
{
private:
	int m, n;
public:
	void input(void);
	void display(void);
	int largest(void);
};

int set::largest(void){
	if(m >=n)
		return (m);
	else
		return (n);
}

void set::input(void){
	std::cout << "Input m & n " << std::endl;
	std::cin >> m >> n;
}

void set::display(void){
	// display is using largest function to get largest value
	std::cout << "Largest value = " << largest() << std::endl;
}

int main(){
	set A;
	A.input();
	A.display();

	return 0;
}
