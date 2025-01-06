// Go Cheatsheet: Basic Syntax, Data Types, Control Structures, Functions
package main

import "fmt"

func main() {
    // Variables and Printing
    var x int = 10   // Variable declaration
    y := 20          // Short variable declaration
    fmt.Println("Hello, Go!") // Print to console

    // Data Types
    var floatVar float64 = 3.14 // Float
    str := "Hello"             // String
    boolVar := true            // Boolean
    var nothing interface{}    // Nil (untyped)

    fmt.Println(floatVar, str, boolVar, nothing)

    // Control Structures
    if x > 0 {
        fmt.Println("Positive")
    } else if x == 0 {
        fmt.Println("Zero")
    } else {
        fmt.Println("Negative")
    }

    for i := 1; i <= 10; i++ { // For loop
        fmt.Println(i)
    }

    counter := 10
    for counter > 0 { // While loop (Go uses `for`)
        fmt.Println(counter)
        counter--
    }

    // Functions
    fmt.Println(greet("Go"))

    // Anonymous Functions
    square := func(n int) int {
        return n * n
    }
    fmt.Println(square(4))
}

// Function Definition
func greet(name string) string {
    return "Hello, " + name
}
