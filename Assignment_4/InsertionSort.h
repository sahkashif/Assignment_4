#pragma once
#include<iostream>
#include<vector>

using namespace std;

class InsertionSort
{
public:
	InsertionSort();
	~InsertionSort();
	void insertion_sorter(int arr[], int size);
	void insertion_sorter_vector(vector<int> arr);
};

