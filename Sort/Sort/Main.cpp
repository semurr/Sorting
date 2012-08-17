//sorting
#include <iostream>
#include "ArraySort.h"
using namespace std;

int main()
{
	int temp;
	//class
	ArraySort temp1;

	cout << "array list" << endl;
	temp1.Print();
	cout << endl << endl;

	cout << "Scrambled array list" << endl;
	temp1.Scramble();
	temp1.Print();

	//add some space
	cout << endl << endl;

	//attempt sort
	cout << "sorted array list" << endl;
	temp1.Insertion();
	//print results
	temp1.Print();




	//temp read value
	cin >> temp;
	return 0;
}