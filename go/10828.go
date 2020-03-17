package main

import "fmt"

func main() {
	var n int
	var curr = 0
	var arr [10000]int
	fmt.Scanf("%d", &n)
	for i := 0; i < n; i++ {
		var input string
		fmt.Scanf("%s", &input)
		switch input {
		case "push":
			var temp int
			fmt.Scanf("%d", &temp)
			arr[curr] = temp
			curr++
		case "pop":
			if curr > 0 {
				fmt.Printf("%d\n", arr[curr-1])
				arr[curr-1] = 0
				curr--
			} else {
				fmt.Printf("-1\n")
			}
		case "size":
			fmt.Printf("%d\n", curr)
		case "empty":

			if curr > 0 {
				fmt.Printf("0\n")
			} else {
				fmt.Printf(" -1\n")
			}
		case "top":
			if curr > 0 {
				fmt.Printf("%d\n", arr[curr-1])
			} else {
				fmt.Printf("-1\n")
			}
		}
	}

}
