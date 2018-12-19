#include <iostream>
#include"SelectionSort.h"


using namespace std;
int main()
{
	vector<int> arr= { 98,55,75,99,50,101,45,80,66,78 };
	SelectionSort s;

	s.SelectionSorterVector(arr, 10);
	
}

