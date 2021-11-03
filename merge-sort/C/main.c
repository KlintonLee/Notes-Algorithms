#include "merge-sort.h"

int main() {
  int arr[] = {5, 2, 7, 1, 8, 3, 0, 9};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("Unordered - ");
  printArray(arr, 0, n);
  mergeSort(arr, 0, n-1);
  printf("\n");
}

void printArray(int arr[], int start, int end)
{
  int i;
  for (i = start; i < end; i++)
    printf("%d ", arr[i]);
}
