#include "heap-sort.h"

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
  int arr[] = {4, 9, 5, 1, 3, 6, 2};
  int n = sizeof(arr)/sizeof(arr[0]);
  heapSort(arr, n);
  printArray(arr, n);
}
