#ifndef QUICK_SORT_H
# define QUICK_SORT_H

#include <stdio.h>

/**
 * @brief This function sorts an array, picking an element as pivot and 
 * partitions the given array aroud picket pivot.
 * @param numbers array of numbers to be sorted
 * @param start start index position
 * @param end last index position
 * @return void
*/
void quickSort(int *numbers, int start, int end);
/**
 * @brief This function prints the int elements of array from defined start and
 * end position.
 * @param numbers array of numbers to be printed
 * @param start start index position for print
 * @param end last index position for print
 * @return void
*/
void printArray(int arr[], int start, int end);

#endif