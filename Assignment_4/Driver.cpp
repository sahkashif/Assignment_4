#include <iostream>
#include"SelectionSort.h"
#include"InsertionSort.h"
#include"BubbleSort.h"
#include"Merge.h"

using namespace std;
int main()
{
	vector<int> vec = { 14,33,27,10,35,19,48,44 };
	int arr[8] = { 14,33,27,10,35,19,48,44 };

	vector<int> vec1 = { 14,33,27,10,35,19,48,44 };
	int arr1[8] = { 14,33,27,10,35,19,48,44 };

	vector<int> vec2 = { 14,33,27,10,35,19,48,44 };
	int arr2[8] = { 14,33,27,10,35,19,48,44 };

	vector<int> vec3 = { 14,33,27,10,35,19,48,44 };
	int arr3[8] = { 14,33,27,10,35,19,48,44 };

	


	
	SelectionSort s;
	InsertionSort i;
	BubbleSort b;
	Merge m;

	cout << "****Now Showing Selection Sort for ARRAY****" << endl << endl;
	s.SelectionSorter(arr, 8);
	cout << endl << endl << endl;

	cout << "****Now Showing Selection Sort for VECTOR****" << endl << endl;
	s.SelectionSorterVector(vec);
	cout << endl << endl << endl;


	cout << "****Now Showing Insertion Sort for ARRAY****" << endl << endl;
	i.insertion_sorter(arr1, 8);
	cout << endl << endl << endl;

	cout << "****Now Showing Insertion Sort for VECTOR****" << endl << endl;
	i.insertion_sorter_vector(vec1);
	cout << endl << endl << endl;

	cout << "****Now Showing Bubble Sort for ARRAY****" << endl << endl;
	b.bullble_sorter(arr2, 8);
	cout << endl << endl << endl;

	cout << "****Now Showing Bubble Sort for VECTOR****" << endl << endl;
	b.bubble_sorter_vector(vec2);
	cout << endl << endl << endl;

	cout << "****Now Showing Merge Sort for ARRAY****" << endl << endl;
	m.merge_sorter(arr3, 8);
	cout << endl << endl << endl;

	cout << "****Now Showing Merge Sort for VECTOR****" << endl << endl;
	m.merge_sorter_vector(vec3);
	cout << endl << endl << endl;

	
}

