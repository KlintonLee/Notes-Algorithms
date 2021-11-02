#include "selection-sort.h"

int main() {
  int arr[] = {8, 5, 3, 9, 2, 7};
  int n = sizeof(arr)/sizeof(arr[0]);
  selectionSort(arr, n);
  printf("\nResult: ");
  printArray(arr, n);
}

void printArray(int arr[], int size)
{
  int i;
  for (i=0; i < size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}
