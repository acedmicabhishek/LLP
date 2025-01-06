--[[ 
   Lua Cheatsheet
   Basic Syntax, Data Types, Control Structures, Functions 
]]

-- Variables and Printing
local x = 10  -- Local variable
y = 20         -- Global variable
print("Hello, Lua!")  -- Prints to console

-- Data Types
x = 3.14  -- Number
str = "Hello"  -- String
multi_line = [[
   Multi-line string
]]
isTrue = true  -- Boolean
isFalse = false
nothing = nil  -- Nil

-- Control Structures
if x > 0 then
    print("Positive")
elseif x == 0 then
    print("Zero")
else
    print("Negative")
end

for i = 1, 10 do
    print(i)
end

while x > 0 do
    x = x - 1
end

repeat
    print(x)
    x = x + 1
until x == 10

-- Functions
function greet(name)
    return "Hello, " .. name
end

print(greet("Lua"))  -- Function call

square = function(x) return x * x end  -- Anonymous function
print(square(4))
