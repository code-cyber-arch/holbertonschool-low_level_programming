# C - Recursion
Recursion in C is a programming technique where a function calls itself to solve problems by breaking them down into simpler, similar sub-problems. It is commonly used for tasks like sorting, calculating factorials, or navigating trees. Recursive functions must have a termination condition to prevent infinite recursion and potential stack overflow errors. This approach allows for cleaner and more concise code for complex problems that are difficult to tackle iteratively.

## 0 - Print a string
The C function, [\_puts\_recursion](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/recursion/0-puts_recursion.c), is designed to recursively print a string followed by a newline:
- Function Definition: The function takes a single argument, s, which is a pointer to the string that needs to be printed.
- Recursive Operation: The function first checks if the current character pointed to by s is not the null character (\\0), indicating the end of the string. If the character is valid, it:
	- Prints the character using \_putchar.
	- Calls itself with the pointer incremented by one (s + 1), moving to the next character in the string.
- Termination Condition: If the function encounters a null character (i.e., \*s is false), it prints a newline character, marking the end of the string and effectively terminating the recursion.
- Purpose: The function demonstrates how recursion can be used to replace a typical loop for string printing, offering a simple yet illustrative example of recursive thinking in problem-solving with strings.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
```
## 1 - Print a string in reverse
The C function [\_print\_rev\_recursion](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/recursion/1-print_rev_recursion.c) is designed to print a string in reverse order using recursion:
- Function Definition: The function takes a single argument, s, which is a pointer to the string that needs to be reversed and printed.
- Recursive Logic: The function first checks if the current character pointed to by s is not the null character (\\0), which marks the end of the string. If not the end:
	- It calls itself with the next character in the string (s + 1), effectively moving towards the end of the string recursively.
- Printing Operation: Upon reaching the end of the string (when \*s is \\0, the recursive calls begin to unwind. During this unwinding phase:
	- Each character is printed using \_putchar in the reverse order of the original string as the function unwinds back up the call stack.
- No Explicit Newline: Notably, this version of the function does not print a newline character after completing the reverse printing. Each recursive call prints a character after the recursive call to further characters, thus reversing the order of characters as recursion unwinds.
- Purpose: This function demonstrates the use of recursion to navigate to the end of a string and then utilize the call stack to reverse the order of operations, thereby printing the string in reverse as the recursive calls return.

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
```
## 2 - Return the length of a string

The C function [\_strlen\_recursion](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/recursion/2-strlen_recursion.c) calculates the length of a string using a recursive approach:
- Function Definition: It accepts one parameter, s, which is a pointer to the string whose length is to be determined.
- Recursive Logic: The function checks if the current character pointed to by s is not the null character (\\0). If it is not the null character:
	- The function increments a counter i by one.
	- It then calls itself with the next character of the string (s + 1) and adds the result to i. This process moves through the string character by character, incrementing for each character until it hits the null terminator of the string.
- Termination and Return: When the function reaches the null character, it stops calling itself recursively and begins to return back up the call stack, summing up the increments to calculate the total length of the string.
- Return Value: The function ultimately returns the total count of characters in the string, not including the null terminator, which is the length of the string.
###
This function effectively demonstrates how recursion can replace a traditional loop in determining the length of a string, leveraging the call stack to accumulate the total count.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
```
## 3 - Return the factorial of a given number
The C function, [factorial](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/recursion/3-factorial.c), calculates the factorial of a non-negative integer using recursion:
- Function Definition: It takes one parameter, n, which is the integer for which the factorial is to be computed.
- Base Cases: The function first checks if n is less than 0. If so, it returns -1, indicating an invalid input. If n is 0, it returns 1, as the factorial of 0 is defined to be 1.
- Recursive Logic: If n is positive, the function calculates the factorial by multiplying n with the factorial of n-1, recursively calling itself with the argument n-1 until it reaches the base case of n being 0.
- Return Value: The function ultimately returns the factorial of n, calculated by multiplying n with the factorial of n-1.
- Purpose: This function showcases how recursion can be used to solve mathematical problems, in this case, computing factorials. It elegantly handles the base cases and utilizes the call stack to compute factorials for larger numbers by breaking the problem into smaller, more manageable sub-problems.

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
```
## 4 - Return the value of x raised to the power of y

The C function [\_pow\_recursion](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/recursion/4-pow_recursion.c) calculates the value of a base number raised to an exponent using recursion:
- Function Definition: It takes two parameters, x (the base number) and y (the exponent).
- Base Cases: The function first checks if y is less than 0. If so, it returns -1, indicating an invalid input for negative exponents. If y is 0, it returns 1, as any number raised to the power of 0 is 1.
- Recursive Logic: If y is positive, the function calculates x raised to the power of y by multiplying x with the result of \_pow\_recursion(x, y - 1), which is the result of raising x to the power of y - 1. This process continues recursively until y reaches 0.
- Return Value: The function ultimately returns the result of x raised to the power of y.
- Purpose: This function demonstrates how recursion can be used to solve mathematical problems, such as exponentiation, by breaking down the problem into smaller, more manageable sub-problems. It elegantly handles both positive and negative exponents, providing the correct result for each case.

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
```
## 5 - Return the natural square root of a number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
```
## 6 - Is prime number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
```
## 7 - Is palindrome


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
```
## 8 - Compare two strings


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
```
