package main

import "fmt"

func bubbleSort(numbers []int) {
	for i := 0; i < len(numbers); i++ {
		for j := 0; j < len(numbers)-i-1; j++ {
			if numbers[j] > numbers[j+1] {
				aux := numbers[j]
				numbers[j] = numbers[j+1]
				numbers[j+1] = aux
			}
		}
	}
}

func main() {
	numbers := []int{5, 2, 7, 1, 8}
	fmt.Println(numbers)
	bubbleSort(numbers)
	fmt.Println(numbers)
}
