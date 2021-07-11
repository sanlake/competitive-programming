package main

import "fmt"

func main() {
	var num int
	var qtd,val float32
	fmt.Scan(&num, &qtd, &val)
	fmt.Printf("NUMBER = %d\n", num)
	fmt.Printf("SALARY = U$ %.2f\n", qtd*val)
}
