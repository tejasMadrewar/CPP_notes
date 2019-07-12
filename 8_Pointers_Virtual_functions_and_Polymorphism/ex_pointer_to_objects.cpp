#include <iostream>

class item
{
	int code;
	float price;
public:
	void getdata(int a, float b){
		code = a;
		price = b;
	}
	void show(void){
		std::cout << "code : " << code << "\n" 
		       << "Price : " << price << std::endl;
	}
};

const int size = 2;

int main(){
	item *p = new item[size];   // making and init the pointer to type item
	item *d = p;
	int x,i;
	float y;

	for (int i = 0; i < size; i++) {
		std::cout << "Input code & price for item" << std::endl;
		std::cin >> x >> y;
		p->getdata(x,y);   // accessing member
		p++;               // increment pointer
	}

	for (int i = 0; i < size; i++) {
		std::cout << "Item : " << i + 1 << std::endl;
		d->show();    // accessing member
		std::cout << std::endl;
		d++;
	}

	return 0;
}
