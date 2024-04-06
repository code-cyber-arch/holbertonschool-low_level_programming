# C - Doubly linked lists
Doubly linked lists in C are linear data structures where each element, or node, contains a data field and two references (links) to the previous and next nodes in the sequence, allowing traversal in both directions.
## Print list
This C function, print\_dlistint, prints the elements of a doubly linked list and returns the number of elements (nodes) in the list. Here's a brief explanation:
- Initializes a counter to track the number of nodes.
- Enters a loop until reaching the end of the list.
- Increments the counter for each node.
- Prints the value of the current node.
- Moves to the next node.
- Returns the total number of nodes traversed and printed.
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
```
## List length
This C function, dlistint\_len, calculates the number of elements in a doubly linked list. Here's a brief explanation:
- Initializes a counter to 0.
- Enters a loop until reaching the end of the list.
- Increments the counter for each node.
- Moves to the next node.
- Returns the total number of nodes counted.
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
```
## Add node

## Add node at the end

## Free list

## Get node at index

## Sum list

## Insert at index

## Delete at index
