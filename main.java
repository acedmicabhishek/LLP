import java.util.*;

public class Main {

    // Basic class
    static class Person {
        String name;
        int age;

        Person(String name, int age) {
            this.name = name;
            this.age = age;
        }

        void greet() {
            System.out.println("Hello, my name is " + name + " and I am " + age + " years old.");
        }
    }

    // Enum
    enum ShapeType {
        CIRCLE, RECTANGLE
    }

    // Abstract class for shapes
    abstract static class Shape {
        abstract double area();
    }

    // Circle class
    static class Circle extends Shape {
        double radius;

        Circle(double radius) {
            this.radius = radius;
        }

        @Override
        double area() {
            return Math.PI * radius * radius;
        }
    }

    // Rectangle class
    static class Rectangle extends Shape {
        double width, height;

        Rectangle(double width, double height) {
            this.width = width;
            this.height = height;
        }

        @Override
        double area() {
            return width * height;
        }
    }

    // Basic function to add two numbers
    static int add(int a, int b) {
        return a + b;
    }

    public static void main(String[] args) {

        // Variables
        int x = 10;
        int y = 5;
        System.out.println("x: " + x + ", y: " + y);
        y += 10;
        System.out.println("Updated y: " + y);

        // Loops
        for (int i = 1; i <= 5; i++) {
            System.out.println("Loop iteration: " + i);
        }

        // If-else
        boolean condition = true;
        String message = condition ? "Condition is true" : "Condition is false";
        System.out.println(message);

        // Function call
        System.out.println("Sum of 5 and 3 is: " + add(5, 3));

        // Class and object creation
        Person person = new Person("Alice", 25);
        person.greet();

        // Polymorphism with shapes
        Shape circle = new Circle(5.0);
        Shape rectangle = new Rectangle(4.0, 6.0);
        System.out.println("Circle area: " + circle.area());
        System.out.println("Rectangle area: " + rectangle.area());

        // List
        List<Integer> numbers = new ArrayList<>(Arrays.asList(1, 2, 3, 4));
        System.out.print("Numbers in list: ");
        for (int num : numbers) {
            System.out.print(num + " ");
        }
        System.out.println();

        // Map
        Map<String, Integer> scores = new HashMap<>();
        scores.put("Alice", 50);
        scores.put("Bob", 40);
        scores.put("Charlie", 30);
        for (Map.Entry<String, Integer> entry : scores.entrySet()) {
            System.out.println(entry.getKey() + ": " + entry.getValue());
        }

        // Exception handling
        try {
            int parsedNumber = Integer.parseInt("42a"); // Invalid string
            System.out.println("Parsed number: " + parsedNumber);
        } catch (NumberFormatException e) {
            System.out.println("Failed to parse number: " + e.getMessage());
        }
    }
}
