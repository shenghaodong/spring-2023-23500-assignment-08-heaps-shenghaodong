#include <iostream>
#include "funcs.h"

int main(){

    int arr[10] = {1, 3, 5, 2, 7, 9, 10, 4, 19, 20};
    int arr2[7] = {2, 8, 5, 3, 9, 1, 10};
    std::cout << arrayPrinter(arr2, 7) << "\n";
    heapSort(arr2, 6);
    std::cout << arrayPrinter(arr2, 7) << "\n";
    std::cout << arrayPrinter(arr, 10) << "\n";
    heapSort(arr, 9);
    std::cout << arrayPrinter(arr, 10) << "\n";

    return 0;
}