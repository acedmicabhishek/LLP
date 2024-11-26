// Basic class
class Person(val name: String, var age: Int) {
    fun greet() {
        println("Hello, my name is $name and I am $age years old.")
    }
}

// Enum
enum class ShapeType {
    CIRCLE, RECTANGLE
}

// Sealed class with data classes
sealed class Shape {
    data class Circle(val radius: Double) : Shape()
    data class Rectangle(val width: Double, val height: Double) : Shape()

    fun area(): Double {
        return when (this) {
            is Circle -> Math.PI * radius * radius
            is Rectangle -> width * height
        }
    }
}

// Main function
fun main() {
    // Variables
    val x = 10
    var y = 5
    println("x: $x, y: $y")
    y += 10
    println("Updated y: $y")

    // Loops
    for (i in 1..5) {
        println("Loop iteration: $i")
    }

    // If-else
    val condition = true
    val message = if (condition) "Condition is true" else "Condition is false"
    println(message)

    // Functions
    println("Sum of 5 and 3 is: ${add(5, 3)}")

    // Null safety
    var nullableString: String? = null
    println(nullableString?.length ?: "String is null")

    // Class and objects
    val person = Person("Alice", 25)
    person.greet()

    // Sealed class and enums
    val circle = Shape.Circle(5.0)
    val rectangle = Shape.Rectangle(4.0, 6.0)
    println("Circle area: ${circle.area()}")
    println("Rectangle area: ${rectangle.area()}")

    // Lists
    val numbers = listOf(1, 2, 3, 4)
    println("Numbers list: $numbers")

    // Mutable lists
    val mutableNumbers = mutableListOf(1, 2, 3)
    mutableNumbers.add(4)
    println("Mutable list: $mutableNumbers")

    // Maps
    val scores = mutableMapOf("Alice" to 50, "Bob" to 40)
    scores["Charlie"] = 30
    for ((key, value) in scores) {
        println("$key scored $value")
    }

    // Try-catch for exception handling
    try {
        val result = "42a".toInt()
        println("Parsed number: $result")
    } catch (e: NumberFormatException) {
        println("Failed to parse number: ${e.message}")
    }
}

// Function
fun add(a: Int, b: Int): Int {
    return a + b
}
