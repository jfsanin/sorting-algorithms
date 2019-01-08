/*
https://www.geeksforgeeks.org/selection-sort/
Selection sort

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

1) The subarray which is already sorted. 

2) Remaining subarray which is unsorted.

In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray.

O(N^2)

it is not stable because you swap the position of a element with the minimun you have found, therefore you lose the correct position of the element that is being swapped

i.e 

3a 3b 2 -> 2 3b 3a (the element 3a has lost its original position)

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> insertionSort(vector<int> data){
	for(int i=0; i<data.size(); i++){
	   int minIdx = i;
	   for(int j=i+1; j<data.size(); j++){
	      if(data[j] < data[minIdx]){
	         minIdx = j;
	      }
	   }
	   swap(data[i], data[minIdx]);
	}

	return data;
}

int main(){
	vector<int> unordered = { 8, 3, 5, 2};
	vector<int> ordered = { 2, 3, 5, 8};

	if(insertionSort(unordered) == ordered){
		cout<<"Sorting was successfull";
	}
	else{
		cout<<"Sorting was not successfull";
	}
}
