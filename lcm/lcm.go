package main

import "fmt"

func gcd(a, b int) int {
	for b != 0 {
		a %= b
		b ^= a
		a ^= b
		b ^= a
	}
	return a
}

func lcm(a, b int) int {
	return a / gcd(a, b) * b
}

func main() {
	fmt.Println(lcm(8, 12))
}
