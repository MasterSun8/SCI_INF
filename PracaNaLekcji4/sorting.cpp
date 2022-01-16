#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "sorting.h"

using namespace std;

Sorting::Sorting(){
    amount = 100000;
    srand (time(NULL));

    for (int x = 0; x < amount; x++){
        vec.push_back(rand() % 1000 + 1);
        //vec.push_back(amount - x);
    }
}

void Sorting::parseVector(){
    for (auto i = vec.begin(); i != vec.end(); ++i){
        cout << *i << endl;
    }
}

void Sorting::insertionSort(){
    for(auto j = 1; j <= vec.size(); j++){
      int key = vec[j];
      int i = j-1;

      while(i >= 0 && vec[i] > key)
      {
         vec[i+1] = vec[i];
         i--;
      }
      vec[i+1] = key;
    }
}

void Sorting::bubbleSort(){
      bool s = true;
      while(s){
        s = false;
        for (auto i = 0; i < vec.size()-1; i++) {
            if (vec[i]>vec[i+1] ){
                swap(vec[i], vec[i+1]);
                s = true;
            }
        }
    }
}

void Sorting::selectionSort(){
    int temp;
    for(auto j = 1; j < vec.size(); j++){
        temp = j;
        for(auto i = j+1; i <= vec.size(); i++){
            if(vec[i] < vec[temp]){
                temp = i;
            }
        }
    swap(vec[temp], vec[j]);
    }
}

void Sorting::stdSort(){
    sort(vec.begin(), vec.end());
}

void Sorting::quickSort(int leftElement, int rightElement){
    int q;
	if (leftElement < rightElement)
	{
		q = partition(leftElement, rightElement); // dzielimy tablice na dwie czesci; q oznacza punkt podzialu
		quickSort( leftElement, q); // wywolujemy rekurencyjnie quicksort dla pierwszej czesci tablicy
		quickSort(q + 1, rightElement); // wywolujemy rekurencyjnie quicksort dla drugiej czesci tablicy
	}
}

int Sorting::partition(int leftElement, int rightElement){
	int x = vec[leftElement];
	int i = leftElement, j = rightElement, w;
	while (true)
	{
		while (vec[j] > x)
			j--;
		while (vec[i] < x)
			i++;
		if (i < j)
		{
			w = vec[i];
			vec[i] = vec[j];
			vec[j] = w;
			i++;
			j--;
		}
		else
			return j;
	}
}

void Sorting::reset(){
    srand (time(NULL));

    for (int x = 0; x < amount; x++){
        vec.push_back(rand() % 1000 + 1);
        //vec.push_back(amount - x);
    }   
}