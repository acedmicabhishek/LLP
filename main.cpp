#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <string>

// Basic class
class Person {
public:
    std::string name;
    int age;

    Person(const std::string& name, int age) : name(name), age(age) {}

    void greet() const {
        std::cout << "Hello, my name is " << name << " and I am " << age << " years old.\n";
    }
};

// Enum
enum class ShapeType {
    Circle,
    Rectangle
};

// Shape class with polymorphism
class Shape {
public:
    virtual double area() const = 0;
    virtual ~Shape() = default;
};

class Circle : public Shape {
    double radius;

public:
    Circle(double radius) : radius(radius) {}

    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
    double width, height;

public:
    Rectangle(double width, double height) : width(width), height(height) {}

    double area() const override {
        return width * height;
    }
};

// Basic functions
int add(int a, int b) {
    return a + b;
}

int main() {
    // Variables
    int x = 10;
    int y = 5;
    std::cout << "x: " << x << ", y: " << y << "\n";
    y += 10;
    std::cout << "Updated y: " << y << "\n";

    // Loops
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Loop iteration: " << i << "\n";
    }

    // If-else
    bool condition = true;
    std::string message = condition ? "Condition is true" : "Condition is false";
    std::cout << message << "\n";

    // Function call
    std::cout << "Sum of 5 and 3 is: " << add(5, 3) << "\n";

    // Class and objects
    Person person("Alice", 25);
    person.greet();

    // Polymorphism with shapes
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);
    std::cout << "Circle area: " << circle->area() << "\n";
    std::cout << "Rectangle area: " << rectangle->area() << "\n";
    delete circle;
    delete rectangle;

    // Vectors
    std::vector<int> numbers = {1, 2, 3, 4};
    std::cout << "Numbers in vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    // Maps
    std::map<std::string, int> scores;
    scores["Alice"] = 50;
    scores["Bob"] = 40;
    scores["Charlie"] = 30;
    for (const auto& [key, value] : scores) {
        std::cout << key << ": " << value << "\n";
    }

    // Try-catch for exception handling
    try {
        int parsedNumber = std::stoi("42a"); // Invalid string
        std::cout << "Parsed number: " << parsedNumber << "\n";
    } catch (const std::exception& e) {
        std::cout << "Failed to parse number: " << e.what() << "\n";
    }

    return 0;
}
