#include "bubble-sort.h"

void bubbleSort(int *numbers, int size) {
  int i, j, aux;

  for (i = 1; i <= size; i++) {
    printf("\n%d - ", i);
    printArray(numbers, size);
    for (j = 0; j < size - i; j++) {
      printf("%d - [%d, %d]\n", j, numbers[j], numbers[j+1]);
      if (numbers[j] > numbers[j+1]) {
        aux = numbers[j+1];
        numbers[j+1] = numbers[j];
        numbers[j] = aux;
      }
    }
  }
}
