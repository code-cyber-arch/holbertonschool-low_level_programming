# C - File I/O
File I/O in C involves reading from and writing to files. Here's a summary:
- Open File: Use fopen to open a file with a specified mode.
- Read from File: Use fgetc, fgets, or fread to read data from the file.
- Write to File: Use fputc, fputs, or fwrite to write data to the file.
- Close File: Use fclose to close the file.
- Error Handling: Check return values for errors.
## Read a text file and prints it to the POSIX standard output

This function, read\_textfile,  reads a specified amount of characters from a text file and prints them to the standard output:
- Initial Checks: It returns 0 if the provided filename is NULL or if memory allocation for the read buffer fails, ensuring it only proceeds with valid input and available memory.
- File Opening: Opens the specified file for reading. If this fails (e.g., file doesn't exist), it cleans up and exits.
- Reading Content: Reads up to the specified number of letters (letters) from the file into a buffer. It aborts on read errors, freeing resources.
- Printing Content: Writes the content read into the buffer to the standard output. If this write operation fails or doesn't write the expected number of bytes, it performs cleanup.
- Cleanup and Return: Frees the allocated buffer and closes the file descriptor before returning. The number of bytes successfully written to standard output is returned, indicating success.
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a
```
## Create file

###
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
```
## Append text at the end of a file

###
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c
```
## Copie the content of a file to another file

###
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp
```
