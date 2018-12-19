#pragma once
#include<iostream>
#include<vector>

using namespace std;
class BubbleSort
{
public:
	BubbleSort();
	~BubbleSort();
	void swap(int &first, int &second);
	void bullble_sorter(int arr[], int size);
	void bubble_sorter_vector(vector<int> arr);
};

