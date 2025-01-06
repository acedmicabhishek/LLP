# Ruby Cheatsheet: Basic Syntax, Data Types, Control Structures, Functions

# Variables and Printing
x = 10  # Variable declaration
y = 20
puts "Hello, Ruby!"  # Print to console

# Data Types
float_var = 3.14  # Float
str = "Hello"     # String
bool_var = true   # Boolean
nothing = nil     # Nil

# Control Structures
if x > 0
  puts "Positive"
elsif x == 0
  puts "Zero"
else
  puts "Negative"
end

# Loops
(1..10).each do |i|  # For loop
  puts i
end

while x > 0          # While loop
  puts x
  x -= 1
end

begin                # Do-while loop
  puts x
  x += 1
end while x < 10

# Functions
def greet(name)
  "Hello, #{name}"
end

puts greet("Ruby")  # Function call

# Anonymous Functions (Lambdas)
square = ->(n) { n * n }
puts square.call(4)
