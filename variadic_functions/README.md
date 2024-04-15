# C - Variadic functions
Variadic functions in C allow the creation of functions that can take a variable number of arguments. They are useful when the number of arguments is not known beforehand, enabling functions like printf to accept any number of parameters. To define a variadic function, you use an ellipsis (...) in the function's declaration to indicate that the number of arguments can vary. Inside the function, you use macros defined in <stdarg.h>, such as va\_start, va\_arg, and va\_end, to initialize a va\_list object, retrieve arguments of any type, and clean up respectively. This provides flexibility in function arguments, making the code adaptable to various scenarios.

## 0 - Return the sum of all its parameters

The C program, [0-sum\_them\_all.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/variadic_functions/0-sum_them_all.c) defines a function sum\_them\_all that calculates the sum of a variable number of integer arguments:

- Purpose: The function is designed to sum all its parameters, returning the total.
- Parameters:
	- n: This parameter specifies the number of additional arguments that follow in the function call.
	- ...: This represents a variable number of additional integer arguments to be summed.
- Implementation:
	- A va\_list named list is used to handle the variable arguments.
	- The function checks if n is 0 (no additional arguments); if true, it returns 0 immediately.
	- va\_start(list, n) initializes the va\_list with the number of arguments specified by n.
	- A loop iterates n times, each time using va\_arg(list, int) to retrieve the next integer from the va\_list and adding it to sum.
	- After the loop, va\_end(list) is called to clean up the va\_list.
	- Return Value: It returns the sum of all provided arguments. If no arguments are given (n is 0), the function returns 0.
###
This function exemplifies the use of variadic functions in C to handle functions with a variable number of parameters effectively.
###
Compile with this line of code, ensuring that the supporting files are included in the [build]()
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```
## 1 - Print numbers

###
Compile with this line of code, ensuring that the supporting files are included in the [build]()
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
```

## 2 - Print strings

###
Compile with this line of code, ensuring that the supporting files are included in the [build]()
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
```

## 3 - Print anything

###
Compile with this line of code, ensuring that the supporting files are included in the [build]()
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
```

## 100 - Assembly that prints Hello, World

###
Compile with this line of code, ensuring that the supporting files are included in the [build]()
```sh
nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello
```
