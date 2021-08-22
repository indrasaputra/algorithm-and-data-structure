package main

import "fmt"

type Cell struct {
	Row    int
	Column int
}

func floodFill(grid [][]int, hasVisited [][]bool) {
	row := len(grid)
	column := len(grid[0])

	stack := []Cell{}
	stack = append(stack, Cell{Row: 0, Column: 0})

	for len(stack) > 0 {
		lastIdx := len(stack) - 1
		current := stack[lastIdx]
		stack = stack[:lastIdx]

		x := current.Row
		y := current.Column
		if x >= 0 && x < row && y >= 0 && y < column && !hasVisited[x][y] {
			hasVisited[x][y] = true
			stack = append(stack, Cell{x - 1, y})
			stack = append(stack, Cell{x, y + 1})
			stack = append(stack, Cell{x + 1, y})
			stack = append(stack, Cell{x, y - 1})
		}
	}
}

func main() {
	row := 10
	column := 20
	value := 1

	grid := make([][]int, row)
	hasVisited := make([][]bool, row)
	for i := range grid {
		grid[i] = make([]int, column)
		hasVisited[i] = make([]bool, column)
		for j := range grid[i] {
			grid[i][j] = value
			value++
		}
	}

	floodFill(grid, hasVisited)

	fmt.Println(hasVisited)
}
