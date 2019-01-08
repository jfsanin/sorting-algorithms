/*
BubbleSort:

https://en.wikipedia.org/wiki/Bubble_sort
This algorithm  is a simple sorting algorithm that repeatedly steps through the list, compares adjacent pairs and swaps them
if they are in the wrong order. The pass through the list is repeated until the list is sorted.

O(n^2)

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> data){
	bool isSorted = false;
	while(!isSorted){
		isSorted = true;
		
		for(int i=1; i<data.size(); i++){			
		   if(data[i-1] > data[i]){
		      isSorted = false;
		      swap(data[i-1], data[i]);
		   }
		}
	}

	return data;
}

int main(){
	vector<int> unordered = { 8, 3, 5, 2};
	vector<int> ordered = { 2, 3, 5, 8};

	if(bubbleSort(unordered) == ordered){
		cout<<"Sorting was successfull";
	}
	else{
		cout<<"Sorting was not successfull";
	}
}
