#ifndef SELECTION_SORT_H
# define SELECTION_SORT_H

#include <stdio.h>

/**
 * @brief This function sorts an array by repeatedly findind the minimun element
 * from unsorted part and putting it at the beginning.
 * @param numbers array of numbers to be sorted
 * @param size the array of numbers size
 * @return void
*/
void selectionSort(int *numbers, int size);
/**
 * @brief This function prints the int elements from an array.
 * @param numbers array of numbers to be printed
 * @param size the array of numbers size
 * @return void
*/
void printArray(int *numbers, int size);

#endif