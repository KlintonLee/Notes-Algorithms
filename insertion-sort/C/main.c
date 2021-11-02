#include "insertion-sort.h"

int main() {
  int arr[] = {5, 2, 7, 1, 8};
  int n = sizeof(arr)/sizeof(arr[0]);
  insertionSort(arr, n);
}

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
