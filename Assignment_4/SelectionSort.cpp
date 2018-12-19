#include "SelectionSort.h"



SelectionSort::SelectionSort()
{
}


SelectionSort::~SelectionSort()
{
}

void SelectionSort::swap(int &first, int &seceond)
{
	int temp;
	temp = first;
	first = seceond;
	seceond = temp;
}

void SelectionSort::SelectionSorter(int arr[],int size)
{
	for (int index = 0; index < size - 1; index++)
	{
		int minimum = index;
		for (int index1 = index+1; index1 < size; index1++)
		{
			if (arr[index1] < arr[minimum])
			{
				minimum = index1;
			}
		}
		swap(arr[index], arr[minimum]);
		for (int index2 = 0; index2 < 10; index2++)
		{
			cout << arr[index2] << " ";
		}
		cout << endl;
		
	}

	
}

void SelectionSort::SelectionSorterVector(vector<int> arr, int size)
{
	
	for (int index = 0; index < size - 1; index++)
	{
		int minimum = index;
		for (int index1 = index + 1; index1 < size; index1++)
		{
			if (arr[index1] < arr[minimum])
			{
				minimum = index1;
			}
			
		}
		int first = arr[index];

		swap(arr[index], arr[minimum]);

		for (int index2 = 0; index2 < 10; index2++)
		{
			cout << arr[index2] << " ";
		}
		cout << endl;

	}


}
