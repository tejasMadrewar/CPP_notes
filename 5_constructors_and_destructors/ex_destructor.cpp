#include <iostream>

using namespace std;


// destructor
// invoke implicitly by compiler upon exit to clean up storage
// objects are destroyed in reverse order of creation


int count = 0;

class alpha
{
public:
	alpha(){count++;
		cout << "\n Number of object created " << count;
	}

	~alpha(){
		cout << "\n Number of object destroyed " << count;
		count--;
	}
};

int main(){
	cout << "\n\n Enter MAIN\n";

	alpha a1, a2, a3, a4;

	{
		cout << "\n\n Enter BLOCK1\n";
		alpha a5;
	}

	{
		cout << "\n\n Enter BLOCK2\n";
		alpha a6;
	}

	cout << "\n\n RE-enter MAIN\n";
	
	return 0;
}
