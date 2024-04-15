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
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/variadic_functions/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
```
## 1 - Print numbers
The C program, [1-print\_numbers.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/variadic_functions/1-print_numbers.c) defines a function print\_numbers that prints a sequence of integers, separated by a specified string, and followed by a newline:
- Purpose: To print multiple numbers, each separated by a predefined string (if provided), and terminate the output with a newline.
- Parameters:
	- separator: A string to be printed between the numbers. It can be NULL, in which case no separator is used.
	- n: The count of numbers to print.
	- ...: Represents the variable number of integers that are to be printed.
- Implementation:
	- The function uses a va\_list named list to handle the variable number of integer arguments.
	- va\_start(list, n) initializes the va\_list to process the variable arguments starting after n.
	- A loop iterates over each of the n numbers:
		- Each number is retrieved using va\_arg(list, int) and printed using printf.
		- If a separator is provided and it is not the last number in the sequence, the separator is printed.
	- After printing all numbers, a newline character is printed.
	- va\_end(list) is called to clean up the va\_list.
- Functionality: This function efficiently prints multiple numbers with a specified separator, handling both scenarios where a separator is provided or not, making it versatile for different formatting needs.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/variadic_functions/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
```
## 2 - Print strings
The C program, [2-print\_strings.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/variadic_functions/2-print_strings.c) defines a function print\_strings that prints a sequence of strings, optionally separated by a specified string, and terminates the output with a newline:
- Purpose: To print a given number of strings in sequence, with each string potentially separated by a user-defined string, and conclude with a newline for clean formatting.
- Parameters:
	- separator: A string that is printed between each string in the sequence, which can be NULL if no separation is desired.
	- n: The count of strings to print.
	- ...: Indicates a variable number of string arguments to be printed.
- Implementation:
	- A va\_list named list is used to manage the variable number of string arguments.
	- va\_start(list, n) initializes the va\_list to fetch the arguments specified after n.
	- The function iterates over each string (total of n):
		- Each string is retrieved using va_arg(list, char *).
		- If the string is not NULL, it is printed using printf. If it is NULL, the function prints (nil) to handle null pointers gracefully.
		- If there is a separator defined and it's not the last string, the separator is printed after the string.
	- After all strings are printed, a newline character is added.
	- va\_end(list) concludes the variable argument list processing.
- Functionality: This function allows for flexible printing of multiple strings with or without separators, handling null string pointers by substituting them with "(nil)", suitable for various output formatting needs.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/variadic_functions/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
```
## 3 - Print anything
The C program, [3-print\_all.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/variadic_functions/3-print_all.c) print\_all is designed to print any combination of data types, specified by a format string, with arguments passed in a variadic manner:
- Purpose: To provide a flexible function capable of printing different types of data (characters, integers, floats, and strings) based on a provided format string.
- Parameters:
	- format: A string consisting of characters where each character ('c', 'i', 'f', 's') indicates the type of the subsequent argument (char, int, float, string respectively).
- Implementation:
	- The function uses a va\_list named list for managing the variable arguments.
	- It starts by initializing the va\_list with va\_start(list, format).
	- The outer loop traverses the format string to determine the type of each argument.
	- An inner loop checks if a comma should be added before the current item by comparing the current format character against a predefined string format\_arg[] = "cifs", ensuring elements are separated in the output after the first element.
	- A switch statement handles each type of data:
		- 'c' for character: uses %c specifier.
		- 'i' for integer: uses %d specifier.
		- 'f' for float: uses %f specifier.
		- 's' for string: checks if the pointer is NULL and prints (nil) if true, otherwise prints the string using %s.
	- Each case sets a flag c to indicate that at least one item has been printed, which is used to control comma insertion.
	- After processing all arguments, it prints a newline, and va\_end(list) is called to clean up the va\_list.
- Functionality: print\_all adeptly handles multiple data types in a single function call, printing them in a formatted sequence based on the specified format string, making it highly versatile for varied output needs. This approach facilitates the creation of complex output formats without needing multiple print statements, simplifying code and enhancing maintainability.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/variadic_functions/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
```
## 100 - Assembly that prints Hello, World
This assembly program, [100-hello\_world.asm](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/variadic_functions/100-hello_world.asm) is a simple example of a Linux assembly application that outputs the string "Hello, World" followed by a newline character to the standard output (stdout). The program is written using NASM syntax and specifically targets the Linux operating system using the x86 architecture:

- Sections and Data Definition:
	- The program contains two sections: .text for the code and .data for data definitions.
	- In the .data section, msg is defined as a byte array containing the string "Hello, World" followed by a newline (0xa). The len label is defined using equ to calculate the length of the msg string automatically by subtracting the address of msg from the current address ($).
- Program Execution:
	- The .text section starts with the main: label, marking the entry point of the program.
	- Registers are set up for a Linux system call: edx is loaded with len (the length of the message), ecx is loaded with the address of msg (the message to print), ebx is set to 1 (indicating file descriptor 1, which is stdout), and eax is set to 4 (the syscall number for sys\_write on Linux).
	- The int 0x80 instruction triggers the interrupt that makes the syscall happen, which executes the write operation.
	- After printing the message, eax is set to 0 (the return value for the program indicating successful execution), and another int 0x80 is executed to call sys\_exit to cleanly exit the program.
- Functionality and Flow:
	- The program demonstrates basic assembly programming techniques, including making system calls, setting up registers, and defining data.
	- It primarily showcases how to perform output operations at a low level in a Linux environment using assembly language, handling basic string data and system call interrupts.
###
This code is an introductory example of system-level programming on Linux, providing insights into the workings of system calls, register management, and basic I/O operations in assembly language.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/variadic_functions/build)
```sh
nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello
```
