package main

import "fmt"

func fastPowerWithModulo(base, power, modulo uint64) uint64 {
	if power == 0 {
		return uint64(1)
	} else if power == 1 {
		return base
	}

	result := fastPowerWithModulo(base, power>>1, modulo)
	if power&1 == 1 {
		return (result * result % modulo) * base % modulo
	}
	return result * result % modulo
}

func fastPower(base, power uint64) uint64 {
	if power == 0 {
		return uint64(1)
	} else if power == 1 {
		return base
	}

	result := fastPower(base, power>>1)
	if power&1 == 1 {
		return result * result * base
	}
	return result * result
}

func main() {
	base := uint64(2)
	power := uint64(30)
	modulo := uint64(2147483647)

	x := fastPowerWithModulo(base, power, modulo)
	y := fastPower(base, power)
	fmt.Println(x, y)
}
