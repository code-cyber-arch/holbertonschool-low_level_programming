# C - Bit manipulation
Bit manipulation in C involves using bitwise operators to manipulate individual bits or groups of bits within a data structure. Here's a brief overview:
- Bitwise AND (&): Compares each bit of two operands. If both bits are 1, the result is 1; otherwise, it's 0.
- Bitwise OR (|): Compares each bit of two operands. If at least one bit is 1, the result is 1; otherwise, it's 0.
- Bitwise XOR (^): Compares each bit of two operands. If the bits are different, the result is 1; otherwise, it's 0.
- Bitwise NOT (~): Flips all bits of the operand, turning 0s into 1s and 1s into 0s.
- Left Shift (<<): Shifts the bits of the operand to the left by a specified number of positions, filling in with 0s.
- Right Shift (>>): Shifts the bits of the operand to the right by a specified number of positions, filling in with 0s or the sign bit (for signed integers).
###
These operators are commonly used in tasks like setting, clearing, or toggling specific bits, extracting or setting groups of bits, or performing arithmetic operations at the bit level.
## Convert a binary number
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
```
## Print the binary representation of a number
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
```
## Return the value of a bit at a given index
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
```
## Set the value of a bit to 1 at a given index
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
```
## Set the value of a bit to 0 at a given index
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
```
## Return the number of bits you would need to flip to get from one number to another
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
```
