#include "merge-sort.h"

static void merge(int *numbers, int start, int mid, int end);

void mergeSort(int *numbers, int start, int end) {
    int mid;
    
    if (start < end) {
        mid = floor((start + end) / 2);

        mergeSort(numbers, start, mid);
        mergeSort(numbers, mid+1, end);
        merge(numbers, start, mid, end);
    }
}

static void merge(int *numbers, int start, int mid, int end) {
    int i, len, p1, p2;
    int *temp;
    int end_part1 = 0;
    int end_part2 = 0;
    
    len = end - start + 1;
    p1 = start;
    p2 = mid + 1;
    printf("\n\n Divided  - ");
    printArray(numbers, start, mid + 1);
    printf("- ");
    printArray(numbers, mid + 1, end + 1);
    temp = (int *) malloc(sizeof(int) * len);
    if (temp) {
        for (i = 0; i < len; i++) {
            if (!end_part1 && !end_part2) {
                if (numbers[p1] < numbers[p2])
                    temp[i] = numbers[p1++];
                else
                    temp[i] = numbers[p2++];

                if (p1 > mid) end_part1 = 1;
                if (p2 > end) end_part2 = 1;
            } else {
                if (!end_part1)
                    temp[i] = numbers[p1++];
                else
                    temp[i] = numbers[p2++];
            }
        }
        printf("\n Conquer  - ");
        printArray(temp, 0, len);
    }
    
    for (i = 0; i < len; i++) {
        numbers[start++] = temp[i];
    }

    free(temp);
    temp = NULL;
}