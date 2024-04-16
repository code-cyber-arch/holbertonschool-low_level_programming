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
