#include <iostream>

const int m = 50;

class ITEMS {
private:
	int itemcode[m];
	float itemPrice[m];
	int count;
public:
	void CNT(void){count = 0;}
	void getitem(void);
	void displaySum(void);
	void remove(void);
	void displayItems(void);
};

void ITEMS::getitem(void){
	std::cout << "Enter item code" << std::endl;
	std::cin >> itemcode[count];
	std::cout << "Enter item cost" << std::endl;

	std::cin >> itemPrice[count];
	count++;
}

void ITEMS::displaySum(void){
	float sum = 0;
	for (int i = 0; i < count; i++)
		sum = sum + itemPrice[i];
	std::cout << "Total value: " << sum << std::endl;
}

void ITEMS::remove(void){
	int a;
	std::cout << "Enter item code: " << std::endl;
	std::cin >> a;
	for (int i = 0; i < count; i++) {
		if(itemcode[i] == a)
			itemPrice[i] = 0;
	}
}

void ITEMS::displayItems(void){
	std::cout << "\n Code price" << std::endl;
	for (int i = 0; i < count; i++) {
		std::cout << "\n" << itemcode[i] << " " << itemPrice[i] ;
	}
	std::cout << std::endl;
}

int main(){
	ITEMS order;
	order.CNT();
	int x;
	do {
		std::cout << "\n Commands";
		std::cout << "\n 1: Add an item";
		std::cout << "\n 2: Display total value";
		std::cout << "\n 3: Delete an item";
		std::cout << "\n 4: Display all item";
		std::cout << "\n 5: QUIT";
		std::cout << "\n Enter option : ";
		std::cin >> x;

		switch (x) {
			case 1: order.getitem(); break;
			case 2: order.displaySum(); break;
			case 3: order.remove(); break;
			case 4: order.displayItems(); break;
			case 5: break;
			default: std::cout << "Error in input try again\n" << std::endl;
		}
		
	} while (x !=5);

	return 0;
}
