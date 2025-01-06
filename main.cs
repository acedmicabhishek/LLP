// C# Cheatsheet: Basic Syntax, Data Types, Control Structures, Functions
using System;

class Program
{
    static void Main(string[] args)
    {
        // Variables and Printing
        int x = 10;             // Integer
        int y = 20;             // Integer
        Console.WriteLine("Hello, C#!"); // Print to console

        // Data Types
        double floatVar = 3.14; // Float
        string str = "Hello";   // String
        bool boolVar = true;    // Boolean
        object nothing = null;  // Null

        Console.WriteLine($"Float: {floatVar}, String: {str}, Boolean: {boolVar}, Null: {nothing}");

        // Control Structures
        if (x > 0)
        {
            Console.WriteLine("Positive");
        }
        else if (x == 0)
        {
            Console.WriteLine("Zero");
        }
        else
        {
            Console.WriteLine("Negative");
        }

        for (int i = 1; i <= 10; i++) // For loop
        {
            Console.WriteLine(i);
        }

        int counter = 10;
        while (counter > 0) // While loop
        {
            Console.WriteLine(counter);
            counter--;
        }

        do // Do-while loop
        {
            Console.WriteLine(counter);
            counter++;
        } while (counter < 10);

        // Functions
        Console.WriteLine(Greet("C#"));

        // Anonymous Functions (Lambdas)
        Func<int, int> square = n => n * n;
        Console.WriteLine(square(4));
    }

    // Function Definition
    static string Greet(string name)
    {
        return "Hello, " + name;
    }
}
