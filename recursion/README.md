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


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
```
## 3 - Return the factorial of a given number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
```
## 4 - Return the value of x raised to the power of y


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
