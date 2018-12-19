#include <iostream>
#include"SelectionSort.h"
#include"InsertionSort.h"

using namespace std;
int main()
{
	vector<int> arr= { 98,55,75,99,50,101,45,80,66,78 };
	int arr1[10] = { 98,55,75,99,50,101,45,80,66,78 };
	SelectionSort s;

	//s.SelectionSorterVector(arr, 10);
	InsertionSort i;
	//i.insertion_sorted(arr1, 10);
	i.insertion_sorter_vector(arr, arr.size());
}

