#include "quick-sort.h"

void printArray(int arr[], int start, int end)
{
  int i;
  for (i = start; i < end; i++)
    printf("%d ", arr[i]);
}

int main() {
  int arr[] = {9, 2, 7, 1, 8, 3, 0, 5};
  int n = sizeof(arr)/sizeof(arr[0]);

  printf("Initial state: ");
  printArray(arr, 0, n);
  quickSort(arr, 0, n-1);
  printf("\nFinal   state: ");
  printArray(arr, 0, n);
}
