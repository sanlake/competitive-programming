package main

import "fmt"

func main() {
	var n string
	var s,v float64
	fmt.Scan(&n, &s, &v)
	fmt.Printf("TOTAL = R$ %.2f\n", s+(v*0.15))
}
