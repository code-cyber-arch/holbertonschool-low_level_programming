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

This C function, add\_dnodeint, adds a new node at the beginning of a doubly linked list. Here's a brief explanation:
- Allocates memory for a new node and handles allocation failure.
- Assigns the value to the new node's data field.
- Sets the new node's previous pointer to NULL.
- Sets the new node's next pointer to the current head of the list.
- Updates the previous pointer of the current head, if it exists, to point to the new node.
- Updates the head of the list to point to the new node.
- Returns a pointer to the new node.
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
```
## Add node at the end
This C function, add\_dnodeint\_end, adds a new node at the end of a doubly linked list. Here's a brief explanation:
- Allocates memory for a new node and handles allocation failure.
- Assigns the value to the new node's data field and sets its next pointer to NULL.
- If the list is empty, sets the new node's previous pointer to NULL, updates the head to point to the new node, and returns.
- If the list is not empty, traverses the list to find the last node.
- Links the last node's next pointer to the new node and sets the new node's previous pointer to the last node.
- Returns a pointer to the new node.
###
Compile using the following code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
```
## Free list

## Get node at index

## Sum list

## Insert at index

## Delete at index
