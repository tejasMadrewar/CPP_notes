#include <iostream>
#include <cstring>

class media
{
protected:
	char title[30];
	float price;
public:
	media(char *s, float a){
		strcpy(title, s);
		price = a;
	}

	virtual void display(){} //empty virtual function
};

class book: public media
{
	int pages;
public:
	book(char *s, float a, int p):media(s, a){    // inoking media constructor
		pages = p;
	}

	void display();  // override the media display
};

class tape: public media
{
	float time;
public:
	tape(char *s, float a, float t):media(s, a){
		time = t;
	}

	void display();  // override the media display
};

void book::display(){
	std::cout << "\nTitle : " << title;
	std::cout << "\nPages : " << pages;
	std::cout << "\nPrice : " << price;
}

void tape::display(){
	std::cout << "\nTitle: "  << title;
	std::cout << "\nPlay time: "  << time << " minutes";
	std::cout << "\nPrice: "  << price;
}


int main(){
	char* title = new char[30];
	float price, time;
	int pages;

	// Book details
	std::cout << "\nENTER BOOK DETAILS" << std::endl;
	std::cout << "\nTitle : " ; std::cin >> title;
	std::cout << "\nPages : " ; std::cin >> pages;
	std::cout << "\nPrice : " ; std::cin >> price;

	book book1(title, price, pages);   // book object

	// tape details
	std::cout << "\nENTER TAPE DETAILS" << std::endl;
	std::cout << "\nTitle : " ; std::cin >> title;
	std::cout << "\nTime : " ; std::cin >> time;
	std::cout << "\nPrice : " ; std::cin >> price;
	
	tape tape1(title, price, time);   // tape object

	media* list[2]; // array of media object addresses

	list[0] = &book1;
	list[1] = &tape1;

	std::cout << "\nMEDIA DETAILS" << std::endl;
	std::cout << "\n---------BOOK---------" << std::endl;
	list[0]->display();  // display book


	std::cout << "\n---------TAPE---------" << std::endl;
	list[1]->display();  // display tape

	return 0;

}


