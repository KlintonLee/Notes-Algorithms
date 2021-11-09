package main

import "fmt"

func selectionSort(numbers []int) {
	for i := 0; i < len(numbers); i++ {
		min_idx := i
		for j := i + 1; j < len(numbers); j++ {
			if numbers[min_idx] > numbers[j] {
				min_idx = j
			}
		}

		if min_idx != i {
			aux := numbers[i]
			numbers[i] = numbers[min_idx]
			numbers[min_idx] = aux
		}
	}
}

func main() {
	numbers := []int{8, 5, 3, 9, 2, 7}
	fmt.Println(numbers)
	selectionSort(numbers)
	fmt.Println(numbers)
}
