#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
struct Person {
    char name[50];
    int age;
};

// Function to greet
void greet(struct Person person) {
    printf("Hello, my name is %s and I am %d years old.\n", person.name, person.age);
}

// Enum
enum ShapeType {
    CIRCLE,
    RECTANGLE
};

// Union
union Shape {
    double radius;       // For CIRCLE
    struct {
        double width;
        double height;
    };                   // For RECTANGLE
};

// Function to calculate area
double calculateArea(enum ShapeType type, union Shape shape) {
    if (type == CIRCLE) {
        return 3.14 * shape.radius * shape.radius;
    } else if (type == RECTANGLE) {
        return shape.width * shape.height;
    }
    return 0;
}

// Main function
int main() {
    // Variables
    int x = 10;
    int y = 5;
    printf("x: %d, y: %d\n", x, y);
    y += 10;
    printf("Updated y: %d\n", y);

    // Loops
    for (int i = 1; i <= 5; i++) {
        printf("Loop iteration: %d\n", i);
    }

    // If-else
    int condition = 1; // 1 for true, 0 for false
    if (condition) {
        printf("Condition is true\n");
    } else {
        printf("Condition is false\n");
    }

    // Function
    printf("Sum of 5 and 3 is: %d\n", add(5, 3));

    // Struct and function call
    struct Person person;
    strcpy(person.name, "Alice");
    person.age = 25;
    greet(person);

    // Enum and union
    enum ShapeType type = CIRCLE;
    union Shape shape;
    shape.radius = 5.0;
    printf("Circle area: %.2f\n", calculateArea(type, shape));

    type = RECTANGLE;
    shape.width = 4.0;
    shape.height = 6.0;
    printf("Rectangle area: %.2f\n", calculateArea(type, shape));

    // Arrays
    int numbers[] = {1, 2, 3, 4};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Numbers array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Dynamic memory allocation
    int *dynamicArray = (int *)malloc(size * sizeof(int));
    if (dynamicArray == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = numbers[i] * 2;
        printf("Dynamic array value at index %d: %d\n", i, dynamicArray[i]);
    }
    free(dynamicArray);

    // Error handling
    char str[] = "42a";
    int parsedNumber = strtol(str, NULL, 10); // Convert to int
    if (parsedNumber == 0 && str[0] != '0') {
        printf("Failed to parse number from string '%s'\n", str);
    } else {
        printf("Parsed number: %d\n", parsedNumber);
    }

    return 0;
}

// Function
int add(int a, int b) {
    return a + b;
}
