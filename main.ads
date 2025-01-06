--[[ 
   Ada Cheatsheet
   Basic Syntax, Data Types, Control Structures, Functions 
]]

-- Variables and Printing
with Ada.Text_IO; use Ada.Text_IO;
procedure Main is
   X : Integer := 10;  -- Variable declaration with initialization
   Y : Integer := 20;
begin
   Put_Line("Hello, Ada!");  -- Print to console

   -- Data Types
   declare
      Float_Var : Float := 3.14;  -- Float
      Str : String := "Hello";    -- String
      Bool_Var : Boolean := True; -- Boolean
   begin
      Put_Line("Float: " & Float'Image(Float_Var));
      Put_Line("String: " & Str);
      Put_Line("Boolean: " & Boolean'Image(Bool_Var));
   end;

   -- Control Structures
   if X > 0 then
      Put_Line("Positive");
   elsif X = 0 then
      Put_Line("Zero");
   else
      Put_Line("Negative");
   end if;

   for I in 1 .. 10 loop
      Put_Line("Loop index: " & Integer'Image(I));
   end loop;

   declare
      Counter : Integer := 10;
   begin
      while Counter > 0 loop
         Put_Line("Counter: " & Integer'Image(Counter));
         Counter := Counter - 1;
      end loop;
   end;

   -- Functions
   declare
      function Greet(Name : String) return String is
      begin
         return "Hello, " & Name;
      end Greet;
   begin
      Put_Line(Greet("Ada"));
   end;

end Main;
