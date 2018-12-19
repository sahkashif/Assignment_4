#include "Merge.h"



Merge::Merge()
{
}


Merge::~Merge()
{
}

void merger(int arr[], int low, int middile, int high)
{
	int *temp = new int[high - low + 1];
	int LeftFirstIndex = low;
	int LeftLastIndex = middile + 1;
	int tempIndex = 0;
	while (LeftFirstIndex <= middile && LeftLastIndex <= high)
	{
		if (arr[LeftFirstIndex] <= arr[LeftLastIndex])
		{
			temp[tempIndex++] = arr[LeftFirstIndex++];

		}
		else
			temp[tempIndex++] = arr[LeftLastIndex++];
	}
	while (LeftFirstIndex <= middile)
	{
		temp[tempIndex++] = arr[LeftFirstIndex++];
	}
	while (LeftLastIndex <= high)
	{
		temp[tempIndex++] = arr[LeftLastIndex++];
	}
	for (tempIndex = 0, LeftFirstIndex = low; LeftFirstIndex <= high; LeftFirstIndex++, tempIndex++)
	{
		arr[LeftFirstIndex] = temp[tempIndex];
	}
	delete[] temp;
}

void merge_helper(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		merge_helper(arr, low, mid);
		merge_helper(arr, mid + 1, high);
		merger(arr, low, mid, high);
		
	}
	
	for (int index = 0; index < high+1; index++)
	{
		cout << arr[index] << " ";
	}
	cout << endl;
}

void Merge::merge_sorter(int arr[], int size)
{
	merge_helper(arr, 0, size - 1);
}

void Merge::merge_sorter_vector(vector<int> arr)
{
	int *array;
	array = new int[arr.size()];
	for (int index = 0; index < arr.size(); index++)
	{
		array[index] = arr[index];
	}
	merge_helper(array, 0, arr.size() - 1);
}

