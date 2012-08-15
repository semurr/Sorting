#include "ArraySort.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

//Constructors

ArraySort::ArraySort()
{
	sortSize = 100;
	
	//default array to one hundred
	for(int i = 0; i < sortSize; i++)
	{
		sort[i] = i;	
	}
}

//main functions

//randomly scrable the array
void ArraySort::Scramble()
{
	srand((unsigned)time(0));
	int i_position = 0;

	for(int i = 0; i < sortSize; i++)
	{
		//grab a random number in scope
		i_position = rand() % sortSize;


		Swap(i , i_position);		
	}
}

//swap locations of values
void ArraySort::Swap(int i, int y)
{
	//swap out variables without creating extra memory 
		sort[i] = sort[i] + sort[y];
		sort[y] = sort[i] - sort[y];
		sort[i] = sort[i] - sort[y];	
}

//print the array out to read
void ArraySort::Print()
{
	for(int i = 0; i < sortSize; i++)
	{
		//add +1 so users reads as 1 - 100 instead of 0-99
		if(i < sortSize - 1)
		{
			cout << sort[i] + 1 << " ";	
		}
		else
		{
			cout << sort[i] + 1 << endl;
		}
	}
}