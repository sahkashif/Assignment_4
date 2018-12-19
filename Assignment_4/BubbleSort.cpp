#include "BubbleSort.h"



BubbleSort::BubbleSort()
{
}


BubbleSort::~BubbleSort()
{
}

void BubbleSort::swap(int & first, int & second)
{
	int temp = first;
	first = second;
	second = temp;
}

void BubbleSort::bullble_sorter(int arr[], int size)
{
	bool swaped = true;
	int tracker = 0;
	while (swaped)
	{
		swaped = false;
		tracker++;
		for (int index = 0; index < size-tracker; index++)
		{
			if (arr[index] > arr[index + 1])
			{
				swap(arr[index], arr[index + 1]);
				swaped = true;
			}
		}
		for (int index = 0; index < size; index++)
		{
			cout << arr[index] << " ";
		}
		cout << endl;
	}
	
}
