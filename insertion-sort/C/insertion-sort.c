#include "insertion-sort.h"

void insertionSort(int *numbers, int size) {
  int i, j, key;

  for (i = 1; i < size; i++) {
    key = numbers[i];
    printf("\nKey %d - ", key);
    printArray(numbers, size);
    for (j = i-1; j >= 0 && numbers[j] > key; j--) {
      printf("%d is greater than %d\n", numbers[j], key);
      numbers[j+1] = numbers[j];
      numbers[j] = key;
    }
  }
}
