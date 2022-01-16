#include "sorting.h"
#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;

int main(){
    Sorting bubble;
    Sorting insert;
    Sorting quick;
    Sorting select;
    Sorting std;
    
    auto start = steady_clock::now();    
    auto stop = steady_clock::now();

for (int i = 0; i < 3; i++){
    std.reset();
     start = steady_clock::now();

    std.stdSort();

     stop = steady_clock::now();

    duration<double> totTime = stop - start;

    cout << totTime.count() << " std sort" << endl;
}

for (int i = 0; i < 3; i++){
    quick.reset();
     start = steady_clock::now();

    quick.quickSort(0, quick.amount-1);

    stop = steady_clock::now();

    duration<double> totTime = stop - start;

    cout << totTime.count() << " quick sort  " << endl;
}
/*
for (int i = 0; i < 3; i++){
    insert.reset();
     start = steady_clock::now();

    insert.insertionSort();

     stop = steady_clock::now();

    duration<double> totTime = stop - start;

    cout << totTime.count() << " insertion sort" << endl;
}

for (int i = 0; i < 3; i++){
    select.reset();
     start = steady_clock::now();

    select.selectionSort();

     stop = steady_clock::now();

    duration<double> totTime = stop - start;
 
    cout << totTime.count() << " selection sort" << endl;
}

for (int i = 0; i < 3; i++){
    bubble.reset();
     start = steady_clock::now();

    bubble.bubbleSort();

    stop = steady_clock::now();

    duration<double> totTime = stop - start;

    cout << totTime.count() << " bubble sort  " << endl;
}*/
}