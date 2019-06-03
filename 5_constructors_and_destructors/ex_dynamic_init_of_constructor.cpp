#include <iostream>

using namespace std;

class Fixed_deposit
{

	long int P_amount; // principle amount
	int years; // period of inestment
	float Rate; // interest rate
	float R_value; // return value of amount
public:
	Fixed_deposit(){}// default constructor       ------------1
	Fixed_deposit(long int p, int y, float r= 0.12);  // default argument
	Fixed_deposit(long int p, int y, int r);
	void display();
};

Fixed_deposit::Fixed_deposit(long int p, int y, float r){ // ---------2
	P_amount = p;
	years = y;
	Rate = r;
	R_value = P_amount;

	for (int i = 0; i <= y; i++) {
		R_value = R_value * (1.0 + r);   // formula
	}
}

Fixed_deposit::Fixed_deposit(long int p, int y, int r){ //------------3
	P_amount = p;
	years = y;
	Rate = r;
	R_value = P_amount;

	for (int i = 0; i <= y; i++) {
		R_value = R_value * (1.0 + float(r)/100);   // formula
	}
}

void Fixed_deposit::display(void){
	cout<< "\n"
		<< "Principle amount = " << P_amount << "\n"
		<< "Return value = " << R_value << "\n";
}


int main(){

	Fixed_deposit FD1, FD2, FD3;
	long int p;
	int  y;
	float r;   // decimal
	int R;    // precent

	cout << "Enter amount, period, interest rate (in precent (eg. 8%, 15%)) :\n";
	cin >> p >> y >> R;

	FD1 = Fixed_deposit(p, y, R);   // ----------- 2

	cout << "Enter amount, period, interest rate (in decimal form (eg. 0.08, 0.15)) :\n";
	cin >> p >> y >> r;

	FD2 = Fixed_deposit(p, y, r);        // ---------- 3
	
	cout << "Enter amount, period :\n";
	cin >> p >> y;

	FD3 = Fixed_deposit(p, y);        // ---------- 2 with default args


	cout << "\nDeposit 1 :";
	FD1.display();


	cout << "\nDeposit 2 :";
	FD2.display();

	cout << "\nDeposit 3 :";
	FD3.display();

	return 0;
}
