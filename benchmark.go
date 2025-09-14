package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()
	sum := 0

	for i := 1; i < 1000000001; i++ {
		sum += i
	}

	fmt.Printf("Sum: %d\n", sum)
	fmt.Printf("Time taken: %v\n", time.Since(start))
}
