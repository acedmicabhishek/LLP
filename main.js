// 1. Variables and Data Types
// Variables can hold different data types: String, Number, Boolean, Object, etc.
let name = "John"; // String
let age = 30; // Number
let height = 5.9; // Float (Decimal Number)
let isStudent = false; // Boolean

// Printing variable values
console.log("Name:", name);
console.log("Age:", age);
console.log("Height:", height);
console.log("Is Student:", isStudent);

// 2. Control Flow (if, else, switch)
if (age >= 18) {
    console.log(`${name} is an adult.`);
} else {
    console.log(`${name} is a minor.`);
}

// Switch case example
let day = "Monday";
switch(day) {
    case "Monday":
        console.log("Start of the week.");
        break;
    case "Friday":
        console.log("End of the workweek.");
        break;
    default:
        console.log("It's a regular day.");
}

// 3. Loops (for, while, do-while)
console.log("For Loop:");
for (let i = 0; i < 5; i++) {
    console.log(`For loop iteration: ${i}`);
}

console.log("While Loop:");
let counter = 0;
while (counter < 3) {
    console.log(`While loop iteration: ${counter}`);
    counter++;
}

console.log("Do-While Loop:");
let counterDoWhile = 0;
do {
    console.log(`Do-While loop iteration: ${counterDoWhile}`);
    counterDoWhile++;
} while (counterDoWhile < 2);

// 4. Functions
// Functions are blocks of code that perform a specific task when called
function greet(personName) {
    return `Hello, ${personName}!`;
}
console.log(greet(name));

// Function with default parameter
function add(a, b = 5) {
    return a + b;
}

console.log("Addition with default parameter:", add(3));
console.log("Addition with custom parameter:", add(3, 7));

// 5. Arrays and Objects
// Arrays: Ordered collection of values
let fruits = ["apple", "banana", "cherry"];
console.log("Fruits array:", fruits);

// Adding an element to the array
fruits.push("orange");
console.log("Updated Fruits array:", fruits);

// Objects: Key-Value pairs
let person = {
    name: "Alice",
    age: 25,
    city: "New York"
};
console.log("Person object:", person);

// Accessing a value from the object
console.log("Name from object:", person.name);

// 6. Classes and Objects (OOP)
class Dog {
    // Constructor method
    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    // Method to describe the dog
    describe() {
        return `${this.name} is ${this.age} years old.`;
    }
}

// Creating an object of the Dog class
let dog1 = new Dog("Buddy", 3);
console.log(dog1.describe());

// 7. Exception Handling
// Error handling with try-catch block
try {
    let result = 10 / 0; // Division by zero
    if (!isFinite(result)) {
        throw new Error("Infinity detected.");
    }
} catch (error) {
    console.error("Error occurred:", error.message);
} finally {
    console.log("This block always runs.");
}

// 8. File I/O (Node.js for file operations)
// For file I/O, we need to use Node.js's 'fs' module

const fs = require('fs');

// Writing to a file
fs.writeFileSync("example.txt", "This is an example file.\nJavaScript is fun!");
console.log("Content written to 'example.txt'.");

// Reading from the file
fs.readFile("example.txt", 'utf8', (err, data) => {
    if (err) {
        console.error("Error reading file:", err);
    } else {
        console.log("File Content:\n", data);
    }
});
