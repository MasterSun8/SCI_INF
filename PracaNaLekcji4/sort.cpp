#include "sorting.h"
#include <chrono>
#include <iostream>

using namespace std;

int main(){
    Sorting bubble;
    Sorting insert;
    Sorting quick;
    Sorting select;
    Sorting std;

for (int i = 0; i < 3; i++){
    std.reset();
    auto start = chrono::steady_clock::now();

    std.stdSort();

    auto stop = chrono::steady_clock::now();

    chrono::duration<double> totTime = stop - start;
    
    cout << fixed;

    cout << totTime.count() << " std sort" << endl;
}

for (int i = 0; i < 3; i++){
    bubble.reset();
    auto start = chrono::steady_clock::now();

    bubble.bubbleSort();

    auto stop = chrono::steady_clock::now();

    chrono::duration<double> totTime = stop - start;
    
    cout << fixed;

    cout << totTime.count() << " bubble sort" << endl;
}

for (int i = 0; i < 3; i++){
    insert.reset();
    auto start = chrono::steady_clock::now();

    insert.insertionSort();

    auto stop = chrono::steady_clock::now();

    chrono::duration<double> totTime = stop - start;
    
    cout << fixed;

    cout << totTime.count() << " insertion sort" << endl;
}

for (int i = 0; i < 3; i++){
    quick.reset();
    auto start = chrono::steady_clock::now();

    quick.quickSort(0, quick.amount-1);

    auto stop = chrono::steady_clock::now();

    chrono::duration<double> totTime = stop - start;
    
    cout << fixed;

    cout << totTime.count() << " quick sort" << endl;
}

for (int i = 0; i < 3; i++){
    select.reset();
    auto start = chrono::steady_clock::now();

    select.selectionSort();

    auto stop = chrono::steady_clock::now();

    chrono::duration<double> totTime = stop - start;
    
    cout << fixed;

    cout << totTime.count() << " selection sort" << endl;
}
}