Aim :
To write a C++ program that:

Prints Hello World as the first output.
Takes two numbers from the user.
Performs and displays addition, subtraction, multiplication, and division.
Tools
Visual Studio Code (VS Code)
C++ Compiler (e.g., g++)
iostream header file
Keyboard for input
Explanation of the C++ Hello World Code
This program is a basic C++ application that prints the phrase "Hello world:" to the screen.

#include
This line tells the compiler to include the Input-Output stream library, which is necessary for using cout to print output.

using namespace std;
This allows us to use standard library features directly without prefixing them with std::.

int main()
The main function is the entry point of every C++ program. It returns an integer to the operating system upon completion.

{ ... }
The braces define the start and end of the main function's body.

cout << "Hello world:";
This line prints the text "Hello world:" to the console.

return 0;
This statement signals that the program finished successfully.

Explanation of the C++ Calculator Program
This program performs basic arithmetic operations (addition, division, and subtraction) on two numbers entered by the user.

#include
Includes the input-output stream library for using cin and cout.

using namespace std;
Allows us to use standard library functions without prefixing them with std::.

int main()
The main function where the program execution starts.

Variables:
float num1, num2, sum, Div, sub;
These variables store the two input numbers and the results of the arithmetic operations.

Input:
The program prompts the user to enter two numbers using cout and reads them with cin.

Operations:

sum = num1 + num2; Adds the two numbers.
Div = num1 / num2; Divides the first number by the second.
sub = num1 - num2; Subtracts the second number from the first.
Output:
Each result is printed to the console using cout followed by endl to move to a new line.

return 0;
Indicates the program finished successfully.

Conclusion:
The basics of C++ was seen through the programs.
