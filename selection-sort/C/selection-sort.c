#include "selection-sort.h"

void selectionSort(int *numbers, int size) {
  int i, j, min_idx, aux;

  for (i = 0; i < size-1; i++) {
    printf("\n%d - ", i);
    printArray(numbers, size);
    min_idx = i;
    printf("Minimun: %d\n", numbers[min_idx]);
    for (j = i+1; j < size-1; j++) {
      if (numbers[min_idx] > numbers[j]) {
        printf("New min: %d\n", numbers[j]);
        min_idx = j;
      }
    }
    if (i != min_idx) {
      aux = numbers[i];
      numbers[i] = numbers[min_idx];
      numbers[min_idx] = aux;
    }
  }
}