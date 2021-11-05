#include "quick-sort.h"

// Example 01
int partition(int *numbers, int start, int end) {
  int aux;
  int pivot = numbers[end];
  int i = start;

  for (int j = start; j < end; j++) {
    if (numbers[j] <= pivot) {
      aux = numbers[j];
      numbers[j] = numbers[i];
      numbers[i] = aux;
      i++;
    }
  }

  numbers[end] = numbers[i];
  numbers[i] = pivot;

  return (i);
}

// Example 02
// int partition(int *numbers, int start, int end) {
//   int pivot = numbers[start];
//   int aux;
//   int i = end;

//   while (start < end) {
//     while (numbers[start] < pivot)
//       start++;
//     while (numbers[end] > pivot)
//       end--;
//     if (numbers[start] > numbers[end]) {
//       aux = numbers[start];
//       numbers[start] = numbers[end];
//       numbers[end] = aux;
//     }
//   }

//   return (end);
// }

void quickSort(int *numbers, int start, int end) {
  int pivot;

  if (start < end) {
    pivot = partition(numbers, start, end);
    quickSort(numbers, start, pivot - 1);
    quickSort(numbers, pivot + 1, end);
  }
}