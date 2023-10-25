package main

import "fmt"

func main() {
	var amount int
	fmt.Scan(&amount)

	notes := []int{5000, 1000, 500, 200, 100}
	counts := make([]int, len(notes))

	for i, note := range notes {
		counts[i] = amount / note
		amount %= note
	}

	for _, count := range counts {
		fmt.Print(count, " ")
	}
}