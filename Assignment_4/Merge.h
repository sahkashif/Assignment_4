#pragma once
#include<iostream>
#include<vector>



using namespace std;
class Merge
{
public:
	int arr_size=10;
	Merge();
	~Merge();
	void merge_sorter(int arr[], int size);
	void merge_sorter_vector(vector<int> arr);
};

