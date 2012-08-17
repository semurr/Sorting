#ifndef ArraySort_H
#define ArraySort_H

#include <iostream>
using namespace std;

class ArraySort
{
private:
	int sortSize;
	int sort[100];  //set to sortSize

public:
	ArraySort();
	void BubbleSort();
	void Selection();
	void Scramble();
	void Swap(int, int);
	void Print();

	//TODO sorting algorithems
};
#endif