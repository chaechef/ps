package main

import "fmt"

func main() {
	var n, x int
	var arr [10000]int
	fmt.Scan(&n, &x)
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &arr[i])
	}
	for i := 0; i < n; i++ {
		if arr[i] < x {
			fmt.Printf("%d ", arr[i])
		}
	}
}
