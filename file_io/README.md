# C - File I/O
File I/O in C involves reading from and writing to files. Here's a summary:
- Open File: Use fopen to open a file with a specified mode.
- Read from File: Use fgetc, fgets, or fread to read data from the file.
- Write to File: Use fputc, fputs, or fwrite to write data to the file.
- Close File: Use fclose to close the file.
- Error Handling: Check return values for errors.
## Read a text file and prints it to the POSIX standard output

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
