#include "InsertionSort.h"



InsertionSort::InsertionSort()
{
}


InsertionSort::~InsertionSort()
{
}

void InsertionSort::insertion_sorted(int arr[], int size)
{
	for (int index = 1; index < size; index++)
	{
		int key = arr[index];
		int index1 = index - 1;
		while (index1 >= 0 && arr[index1] > key)
		{
			arr[index1 + 1] = arr[index1];
			index1--;
		}
		arr[index1 + 1] = key;

		for (int index2 = 0; index2 < size; index2++)
		{
			cout << arr[index2] << " ";
		}
		cout << endl;
	}
	
}

void InsertionSort::insertion_sorter_vector(vector<int> arr, int size)
{
	for (int index = 1; index < size; index++)
	{
		int key = arr[index];
		int index1 = index - 1;
		while (index1 >= 0 && arr[index1] > key)
		{
			arr[index1 + 1] = arr[index1];
			index1--;
		}
		arr[index1 + 1] = key;

		for (int index2 = 0; index2 < size; index2++)
		{
			cout << arr[index2] << " ";
		}
		cout << endl;
	}
}
