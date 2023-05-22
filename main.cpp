#include <iostream>
#include "funcs.h"

int main(){

    int arr[10];
    int arr2[6] = {2, 8, 5, 3, 9, 1};
    for(int i = 0; i < 10; i++){
        arr[i] = i + 2;
    }
    arrayPrinter(arr2, 6);
    heapSort(arr2, 5);
    arrayPrinter(arr2, 6);

    return 0;
}