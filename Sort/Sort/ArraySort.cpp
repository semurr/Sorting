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
void ArraySort::BubbleSort()
{
	bool change = false;  //counter for if swaps happen
	for(int i = 0; i < sortSize - 1; i++)
	{
		if(sort[i] > sort[i+1])  //check if first value is greater than second
		{
			swap(sort[i], sort[i+1]);
			change = true;
		}
	}

	if(change == false) //if no swap happens return else recall funciton
	{
		return;
	}
	
	BubbleSort();
	
}

void ArraySort::Selection()    // O(n^2)
{
	int lowest;
	for(int i = 0; i < sortSize; i++)
	{
		lowest = i;
		for(int j = i + 1; j < sortSize; j++)
		{
			if (sort[lowest] > sort[j])
			{
				lowest = j;
			}		
		}
		Swap(i, lowest);
	}
}
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
	if( i != y)
	{
		sort[i] = sort[i] + sort[y];
		sort[y] = sort[i] - sort[y];
		sort[i] = sort[i] - sort[y];
	}

	//int temp = sort[i];
	//sort[i] = sort[y];
	//sort[y] = temp;

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