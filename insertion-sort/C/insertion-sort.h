#ifndef INSERTION_SORT_H
# define INSERTION_SORT_H

#include <stdio.h>

/**
 * @brief This function sorts an array, values from unsorted part are piked and
 * placed in correct part of sorted part
 * @param numbers array of numbers to be sorted
 * @param size the array of numbers size
 * @return void
*/
void insertionSort(int *numbers, int size);
/**
 * @brief This function prints the int elements from an array.
 * @param numbers array of numbers to be printed
 * @param size the array of numbers size
 * @return void
*/
void printArray(int arr[], int size);

#endif