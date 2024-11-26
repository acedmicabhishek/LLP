# 1. Variables and Data Types
# Variables are used to store data values.
name = "John"  # String
age = 30  # Integer
height = 5.9  # Float
is_student = False  # Boolean

# Printing variable values
print("Name:", name)
print("Age:", age)
print("Height:", height)
print("Is Student:", is_student)

# 2. Control Flow (if, else, elif)
if age >= 18:
    print(f"{name} is an adult.")
else:
    print(f"{name} is a minor.")

# 3. Loops (for, while)
# For loop - iterating over a range
for i in range(5):
    print(f"For loop iteration: {i}")

# While loop - iterating until a condition is met
counter = 0
while counter < 3:
    print(f"While loop iteration: {counter}")
    counter += 1

# 4. Functions
# Functions are blocks of code that are executed when called.
def greet(person_name):
    return f"Hello, {person_name}!"

print(greet(name))

# Function with default argument
def add(a, b=5):
    return a + b

print("Addition with default argument:", add(3))
print("Addition with custom argument:", add(3, 7))

# 5. Lists, Tuples, and Dictionaries
# Lists: Ordered, mutable collection
fruits = ["apple", "banana", "cherry"]
print("Fruits list:", fruits)

# Adding an item to the list
fruits.append("orange")
print("Updated Fruits list:", fruits)

# Tuples: Ordered, immutable collection
coordinates = (10, 20)
print("Coordinates tuple:", coordinates)

# Dictionaries: Unordered collection of key-value pairs
person = {"name": "Alice", "age": 25, "city": "New York"}
print("Person dictionary:", person)

# Accessing a value from the dictionary
print("Name from dictionary:", person["name"])

# 6. Classes and Objects (Object-Oriented Programming)
# A class is a blueprint for creating objects (instances).
class Dog:
    # Constructor method
    def __init__(self, name, age):
        self.name = name
        self.age = age

    # Method to describe the dog
    def describe(self):
        return f"{self.name} is {self.age} years old."

# Creating an object of the Dog class
dog1 = Dog("Buddy", 3)
print(dog1.describe())

# 7. Exception Handling
# Exception handling is used to handle errors gracefully.
try:
    result = 10 / 0  # Division by zero (will cause an error)
except ZeroDivisionError as e:
    print(f"Error occurred: {e}")
else:
    print("No error occurred!")
finally:
    print("This block always runs.")

# 8. File I/O
# Reading from a file
try:
    with open("example.txt", "r") as file:
        content = file.read()
        print("File Content:\n", content)
except FileNotFoundError:
    print("File not found. Creating a new file.")

# Writing to a file
with open("example.txt", "w") as file:
    file.write("This is an example file.\nPython is great for file I/O operations.")
    print("Content written to 'example.txt'.")

# Reading the file again to see the content
with open("example.txt", "r") as file:
    content = file.read()
    print("\nRe-read File Content:\n", content)
