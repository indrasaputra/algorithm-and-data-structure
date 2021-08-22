package main

import (
	"fmt"
)

func gcd_bits(a, b int) int {
	for b != 0 {
		a %= b
		b ^= a
		a ^= b
		b ^= a
	}
	return a
}

func gcd_loop(a, b int) int {
	for b != 0 {
		a, b = b, a%b
	}
	return a
}

func gcd_recursive(a, b int) int {
	if b == 0 {
		return a
	}
	return gcd_recursive(b, a%b)
}

func main() {
	fmt.Println(gcd_bits(66, 24))
	fmt.Println(gcd_loop(66, 24))
	fmt.Println(gcd_recursive(66, 24))
}
