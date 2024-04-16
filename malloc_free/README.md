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

This C program, [1-strdup.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/1-strdup.c) defines a function \_strdup to duplicate a string up to the newline character:
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

This C program, [2-str\_concat.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/2-str_concat.c), defines a function str\_concat to concatenate two strings:
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

## 3 - Return a pointer to a 2 dimensional array of integers
This C program, [3-alloc\_grid.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/3-alloc_grid.c), defines a function alloc\_grid to allocate memory for a 2D array of integers:
- Function Definition: The function takes two arguments, width and height, which specify the dimensions of the 2D array.
- Input Validation: It checks if either width or height is less than or equal to 0 and returns NULL if so, indicating an invalid input.
- Memory Allocation: It first allocates memory for an array of height integer pointers (array) using malloc.
- Row Allocation: For each row in the 2D array, it allocates memory for width integers and assigns the pointer to array[i].
- Error Handling: If memory allocation fails for any row, it frees the memory allocated for the previous rows and the array of pointers, and returns NULL.
- Initialization: It then initializes each element of the 2D array to 0.
- Return Value: Finally, it returns a pointer to the allocated 2D array (array), or NULL if memory allocation fails at any point.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o 3-alloc_grid
```

## 4 - Free a 2 dimensional grid previously created

This C program, [4-free\_grid.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/4-free_grid.c) defines a function free\_grid to free the memory allocated for a 2D array of integers:
- Function Definition: The function takes two arguments, grid (the 2D array to be freed) and height (the height of the 2D array).
- Memory Deallocation: It iterates through each row of the 2D array and frees the memory allocated for that row using free.
- Nullifying Pointers: After freeing each row, it sets the corresponding pointer in grid to NULL, ensuring that no dangling pointers remain.
- Final Freeing: Once all rows have been freed, it frees the memory allocated for the array of pointers (grid itself).
- Nullifying Grid Pointer: Finally, it sets the grid pointer itself to NULL to prevent any accidental access to the freed memory.
- Description: This function provides a way to safely free the memory allocated for a 2D array of integers, ensuring that all memory is properly deallocated and pointers are set to NULL to prevent access to freed memory.
###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o 4-free_grid
```

## 100 - Concatenate all the arguments of your program

This C program, [100-argstostr.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/100-argstostr.c), defines a function argstostr to concatenate arguments of a program:
- Function Definition: The function takes two arguments, ac (argument count) and av (argument vector).
- Input Validation: It first checks if ac is 0 or av is NULL, returning NULL if either condition is true, indicating failure or invalid input.
- Calculating Length: It then calculates the total length needed for the concatenated string by iterating through each argument in av and adding the length of each argument plus one (for the newline character).
- Memory Allocation: The function dynamically allocates memory for the concatenated string (rtn) using malloc, ensuring enough space for the concatenated string and a null terminator.
- Concatenation: It iterates through each argument in av, copying each character into rtn and adding a newline character after each argument.
- Finalizing String: It adds a null terminator at the end of the concatenated string.
- Return Value: Finally, it returns a pointer to the concatenated string (rtn), or NULL if memory allocation fails or ac is 0.

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
```

## 101 - Split a string into words
This C program, [101-strtow.c](https://github.com/amirasabdu/holbertonschool-low_level_programming/blob/main/malloc_free/101-strtow.c) consists of two functions:

- free\_g Function: This function frees a 2D array of characters. It takes two arguments, \_g (the array to be freed) and i (the height of the array). It first checks if \_g is not NULL and i is not 0. If so, it iterates through each row of the array and frees the memory allocated for that row using free. Finally, it frees the memory allocated for the array of pointers (\_g itself).

- strtow Function: This function splits a string into words. It takes a single argument, str, which is the string to be split. It first calculates the number of words in the string by counting sequences of non-space characters followed by a space or the end of the string. It then allocates memory for an array of strings (array) to store the words, plus an additional NULL pointer at the end. If memory allocation fails or no words are found, it frees the memory allocated for array and returns NULL. Next, it iterates through each word in the string, allocates memory for the word in array[i], copies the characters of the word into array[i], and adds a null terminator at the end. Finally, it adds a NULL pointer at the end of array to mark the end of the array of strings and returns array.

###
Compile with this line of code, ensuring that the supporting files are included in the [build](https://github.com/amirasabdu/holbertonschool-low_level_programming/tree/main/malloc_free/build)
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
```
