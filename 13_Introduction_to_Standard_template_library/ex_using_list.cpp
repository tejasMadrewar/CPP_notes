#include <iostream>
#include <cstdlib>
#include <list>

using namespace std;


void display(list<int> &lst){
	list<int>::iterator p;  // iterator
	for (p = lst.begin(); p != lst.end(); ++p)
		std::cout << *p << " ";
	std::cout << std::endl;
	std::cout << std::endl;
}

int main(){
	list<int> list1; // empty list
	list<int> list2(5); // size 5
	for (int i = 0; i < 3; i++)
		list1.push_back(rand()/100);   // adding element to list

	list<int>::iterator p;    // iterator
	for (p = list2.begin(); p != list2.end() ; ++p)
		*p = rand() /100;           // adding element to list

	std::cout << "List1" << std::endl;
	display(list1);

	std::cout << "List2" << std::endl;
	display(list2);

	// add two element at end of list
	list1.push_back(100);
	list1.push_back(200);

	// Remove an element at the front of list2
	list2.pop_front();

	std::cout << "Now list1" << std::endl;
	display(list1);

	std::cout << "Now list2" << std::endl;
	display(list2);

	list<int> listA, listB;
	listA = list1;
	listB = list2;

	// Mergin two list (unsorted)
	list1.merge(list2);
	std::cout << "Merged unsorted list" << std::endl;
	display(list1);

	// Sorting and merging
	listA.sort();
	listB.sort();
	listA.merge(listB);
	std::cout << "Merged sorted list" << std::endl;
	display(listA);

	// Reversing  a list
	listA.reverse();
	std::cout << "Reversed merged list" << std::endl;
	display(listA);

	return 0;
}
