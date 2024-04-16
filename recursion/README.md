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

```
## 1 - Print a string in reverse


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 2 - Return the length of a string


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 3 - Return the factorial of a given number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 4 - Return the value of x raised to the power of y


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 5 - Return the natural square root of a number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 6 - Is prime number


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 7 - Is palindrome


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
## 8 - Compare two strings


###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/recursion/build)
```sh

```
