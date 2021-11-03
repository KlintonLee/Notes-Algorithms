#ifndef MERGE_SORT_H
# define MERGE_SORT_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief This function sorts an array, repeatedly breaks down a list into
 * several sublists until each sublist consists of a single element and merging
 * those sublists in a manner that results into a sorted list.
 * @param numbers array of numbers to be sorted
 * @param start start index position
 * @param end last index position
 * @return void
*/
void mergeSort(int *numbers, int start, int end);
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