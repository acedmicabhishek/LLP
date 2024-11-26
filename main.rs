use std::collections::HashMap;

// Basic Struct
struct Person {
    name: String,
    age: u8,
}

// Implement methods for the struct
impl Person {
    fn new(name: &str, age: u8) -> Self {
        Self {
            name: name.to_string(),
            age,
        }
    }

    fn greet(&self) {
        println!("Hello, my name is {} and I am {} years old.", self.name, self.age);
    }
}

// Enum
enum Shape {
    Circle(f64),       // Holds the radius
    Rectangle(f64, f64), // Holds width and height
}

// Enum method
impl Shape {
    fn area(&self) -> f64 {
        match self {
            Shape::Circle(radius) => 3.14 * radius * radius,
            Shape::Rectangle(width, height) => width * height,
        }
    }
}

// Demonstrate basic features
fn main() {
    // Variables and mutability
    let mut x = 5;
    println!("The value of x is: {}", x);
    x = 10;
    println!("The new value of x is: {}", x);

    // Loops
    for i in 0..5 {
        println!("Loop iteration: {}", i);
    }

    // If-else
    let condition = true;
    let number = if condition { 42 } else { 0 };
    println!("The number is: {}", number);

    // Functions
    println!("5 + 3 = {}", add(5, 3));

    // Ownership and borrowing
    let s1 = String::from("hello");
    let s2 = s1.clone(); // Clone to avoid move
    println!("s1: {}, s2: {}", s1, s2);

    // Struct and methods
    let person = Person::new("Alice", 30);
    person.greet();

    // Enum
    let circle = Shape::Circle(5.0);
    let rectangle = Shape::Rectangle(4.0, 6.0);
    println!("Circle area: {}", circle.area());
    println!("Rectangle area: {}", rectangle.area());

    // Vectors
    let mut numbers = vec![1, 2, 3];
    numbers.push(4);
    for num in &numbers {
        println!("Vector value: {}", num);
    }

    // HashMap
    let mut scores = HashMap::new();
    scores.insert("Alice", 50);
    scores.insert("Bob", 40);
    for (key, value) in &scores {
        println!("{}: {}", key, value);
    }

    // Error handling with Result
    match "42".parse::<i32>() {
        Ok(n) => println!("Parsed number: {}", n),
        Err(e) => println!("Failed to parse number: {}", e),
    }

    // Error handling with Option
    let option_value: Option<i32> = Some(10);
    if let Some(v) = option_value {
        println!("Option value: {}", v);
    }
}

// Function
fn add(a: i32, b: i32) -> i32 {
    a + b
}
