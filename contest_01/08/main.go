package main

import "fmt"

func main() {
	var a, b, c int
	fmt.Scan(&a, &b, &c)
	max := a
	if b > max {
		max = b
	}
	if c > max {
		max = c
	}
	fmt.Println(max)
}