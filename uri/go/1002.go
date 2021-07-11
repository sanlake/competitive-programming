package main

import "fmt"

func main() {
	var r,pi float64
	pi = 3.14159
	fmt.Scan(&r)
	fmt.Printf("A=%.4f\n", pi*r*r)
}
