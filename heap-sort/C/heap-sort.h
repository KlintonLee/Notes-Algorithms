#ifndef HEAP_SORT_H
# define HEAP_SORT_H

#include <stdio.h>

/**
 * @brief This function sorts an array based on Binary Heap data structure. A
 * tree which obeys the property that the root of any tree is greater than or
 * equal to all its children
 * @param numbers array of numbers to be sorted
 * @param size the array of numbers size
 * @return void
*/
void heapSort(int *numbers, int size);
/**
 * @brief This function prints the int elements from an array.
 * @param numbers array of numbers to be printed
 * @param size the array of numbers size
 * @return void
*/
void printArray(int arr[], int size);

#endif