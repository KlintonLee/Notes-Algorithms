#include "bubble-sort.h"

void bubbleSort(int *numbers, int size) {
  int i, j, aux;
  
  for (i = 0; i < size; i++) {
    printf("\n%d - ", i);
    printArray(numbers, size);
    for (j = 0; j < size - 1; j++) {
      printf("%d - [%d, %d]\n", j + 1, numbers[j], numbers[j+1]);
      if (numbers[j] > numbers[j+1]) {
        aux = numbers[j+1];
        numbers[j+1] = numbers[j];
        numbers[j] = aux;
      }
    }
  }
}
