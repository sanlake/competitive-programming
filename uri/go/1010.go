package main

import "fmt"

func main() {
	var p1,p2,q1,q2 int
	var v1,v2 float64
	fmt.Scan(&p1, &q1, &v1)
	fmt.Scan(&p2, &q2, &v2)
	fmt.Printf("VALOR A PAGAR: R$ %.2f\n", float64(q1)*v1+float64(q2)*v2)
}
