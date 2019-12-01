#include <iostream>

using namespace std;

namespace classes{
	class Test{
		private:
			int m;
		public:
			Test(int a){m = a;}

			void display(){
			std::cout << "m = " << m << std::endl;
			}
	};
}

int main(){
	// using scope resolution
	classes::Test T1(200);
	T1.display();

	// using directive
	using namespace classes;
	Test T2(400);
	T2.display();

	return 0;
}
