#include <vector>


class Sorting{
private:
    std::vector <int>vec;
    int partition(int leftElement, int rightElement);
public:
    Sorting();
    void parseVector();
    void insertionSort();
    void bubbleSort();
    void selectionSort();
    void stdSort();
    void quickSort(int leftElement, int rightElement);
    void reset();
    int amount;
};