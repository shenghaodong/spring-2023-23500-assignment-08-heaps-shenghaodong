#include "funcs.h"
#include <iostream>
#include <math.h>

void heapSort(int data[], int n){
    buildMaxHeap(data, n);
    for(int i = n - 1; i >= 0; i--){
        std::swap(data[0], data[i]);
        heapify(data, 0, i);
    }
}

void buildMaxHeap(int data[], int n){
    for(int i = n; i >= 0; i--){
        heapify(data, i, n);
    }
}

void heapify(int data[], int val, int n){
    int left = (2 * val);
    int right = (2 * val) + 1;
    int max;

    if(left < n && data[left] > data[val]){
        max = left;
    }else{
        max = val;
    }
    if(right < n && data[right] > data[max] && data[right] > data[left]){
        max = right;
    }
    if (max != val){
        std::swap(data[val], data[max]);
        heapify(data, max, n);
    }
    return;
}

std::string arrayPrinter(int arr[], int size){
    std::string returnVal = "";
    for(int i = 0; i < size; i++){
        returnVal = returnVal + std::to_string(arr[i]) + " ";
    }
    return returnVal;
}