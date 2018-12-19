#pragma once
#include<iostream>
#include<vector>

using namespace std;

class SelectionSort
{
public:
	SelectionSort();
	~SelectionSort();
	void swap(int &first, int &seceond);
	void SelectionSorter(int arr[],int size);
	void SelectionSorterVector(vector<int> arr);
};

