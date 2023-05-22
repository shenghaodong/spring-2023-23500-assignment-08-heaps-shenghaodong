#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"


TEST_CASE("Heap Test"){
    int arr[7] = {3, 43, 2, 6, 39, 19, 90};
    int arr2[4] = {1, 2, 3, 4};
    int arr3[11] = {10, 11, 9, 7, 8, 3, 5, 4, 6, 2, 12};
    heapSort(arr, 6);
    heapSort(arr2, 3);
    heapSort(arr3, 10);
    CHECK(arrayPrinter(arr, 7) == "2 3 6 19 39 43 90 ");
    CHECK(arrayPrinter(arr2, 4) == "1 2 3 4 ");
    CHECK(arrayPrinter(arr3, 11) == "2 3 4 5 6 7 8 9 10 11 12 ");
};