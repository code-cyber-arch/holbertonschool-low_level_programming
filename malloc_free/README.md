# C - malloc, free


In C, malloc is used to dynamically allocate memory on the heap, allowing you to allocate memory at runtime. It takes the number of bytes to allocate as an argument and returns a pointer to the allocated memory, or NULL if the allocation fails. Once you're done using the allocated memory, you should free it using the free function to prevent memory leaks. free takes the pointer to the allocated memory as an argument and releases the memory back to the system for reuse. It's important to free memory only once and not to use it after freeing it to avoid undefined behavior.

## 0 - Create an array of chars
This program, [0-create\_array.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/0-create_array.c), defines a function create\_array that dynamically allocates an array of characters and initializes it with a specified character. Here's a breakdown:
- The function create\_array takes two arguments: size, which specifies the size of the array, and c, which is the character used to fill the array.
- If size is 0, the function returns NULL, indicating failure.
- It allocates memory for the array using malloc, multiplying the size by sizeof(char) to ensure the correct number of bytes are allocated.
- If the allocation fails (i.e., malloc returns NULL), the function also returns NULL.
- Otherwise, it iterates over the array and fills each element with the specified character c.
- Finally, it returns a pointer to the allocated and initialized array.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
```

## 1 - Return a pointer to a newly allocated space in memory, contains a copy of the string given as a parameter

This C program defines a function [\_strdup](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/1-strdup.c) to duplicate a string up to the newline character:
- Function Definition: The function takes a single argument, str, which is the string to be duplicated.
- Input Validation: It first checks if str is NULL, returning NULL if true, indicating failure or an invalid input.
- Duplicating the String: It then iterates through the characters of str to find the length of the string, excluding the newline character.
- Memory Allocation: The function dynamically allocates memory for the duplicated string (dup\_str) using malloc, ensuring enough space for the string and a null terminator.
- String Duplication: It copies each character of str into dup\_str using a loop, excluding the newline character, and adds a null terminator at the end.
- Return Value: Finally, the function returns a pointer to the duplicated string (dup\_str), or NULL if memory allocation fails or str is NULL.
###
This function provides a way to duplicate strings, excluding the newline character, and is useful in scenarios where you need to manipulate or process strings without including newline characters.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
```
## 2 - Concatenate two strings

This C program defines a function [str\_concat]() to concatenate two strings:
- Function Definition: The function takes two arguments, s1 and s2, which are the strings to be concatenated.
- Input Validation: It checks if either s1 or s2 is NULL and sets them to empty strings if so, ensuring that concatenation can proceed safely.
- Calculating String Lengths: It calculates the lengths of s1 and s2 by iterating through each string's characters until the null terminator is reached.
- Memory Allocation: The function dynamically allocates memory for the concatenated string (conc\_str) using malloc, ensuring enough space for both strings and a null terminator.
- String Concatenation: It then copies each character of s1 and s2 into conc\_str using loops, combining the strings into a single string.
- Return Value: Finally, it returns a pointer to the concatenated string (conc\_str), or NULL if memory allocation fails.
###
This function provides a way to concatenate two strings into a new string, handling cases where either or both input strings are NULL.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
```
