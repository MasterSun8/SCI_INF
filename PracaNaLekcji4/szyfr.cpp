#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "szyfr.h"

using namespace std;

Szyfr::Szyfr(){
    srand (time(NULL));

    for (int x = 0; x < 100; x++){
        vec.push_back(rand() % 1000 + 1);
    }
}

void Szyfr::parseVector(){
    for (auto i = vec.begin(); i != vec.end(); ++i){
        cout << *i << endl;
    }
}

void Szyfr::insertionSort(){
    for(auto j = 1; j < vec.size(); j++)
    {
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

void Szyfr::bubbleSort(){
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

int main(){
    Szyfr bubble;
    Szyfr insert;
    insert.insertionSort();
//    insert.parseVector();
    bubble.bubbleSort();
    bubble.parseVector();
}