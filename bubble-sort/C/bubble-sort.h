#ifndef BUBBLE_SORT_H
# define BUBBLE_SORT_H

#include <stdio.h>

/**
 * @brief This function sorts an array comparing each pair adjacent elements and
 * swaps if they are not in order.
 * @param numbers array of numbers to be sorted
 * @param size the array of numbers size
 * @return void
*/
void bubbleSort(int *numbers, int size);
/**
 * @brief This function prints the int elements from an array.
 * @param numbers array of numbers to be printed
 * @param size the array of numbers size
 * @return void
*/
void printArray(int arr[], int size);

#endif