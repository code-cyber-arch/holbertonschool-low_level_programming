# C - Singly linked lists
Singly linked lists in C are linear data structures where each element, or node, contains a data field and a reference (link) to the next node in the sequence, with the last node pointing to NULL.

## Print list
This C function, print\_list, prints the elements of a singly linked list and returns the number of elements (nodes) in the list. Here's a brief breakdown:

- It initializes a counter, nodes, to keep track of the number of nodes in the list.
- The function enters a loop that continues until it reaches the end of the list (h is not NULL).
  - Inside the loop, it checks if the current node's string (str) is NULL. If it is, it prints "[0] (nil)" to indicate that the node's string is empty.
  - If the string is not NULL, it prints the length of the string (len) and the string itself in a specific format: "[length] string".
  - It increments the nodes counter to account for the current node.
  - It moves to the next node in the list by updating h to point to the next node (h-\>next).
- Once the loop finishes (i.e., h is NULL, indicating the end of the list), the function returns the total number of nodes it traversed and printed, stored in nodes.
<br>
Complie using this code:
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
```
<br>
## List length
This C function, list\_len, calculates the length of a singly linked list, i.e., the number of elements (nodes) in the list. Here's how it works in brief:

- It starts by initializing a counter variable elements to 0. This variable will be used to count the number of nodes in the list.
- The function then enters a while loop that iterates as long as the current node (h) is not NULL. The condition while (h) means the loop continues until h is NULL, indicating the end of the list.
- Inside the loop, for each node encountered, it increments the elements counter by 1, indicating that another node has been counted.
- After incrementing, it moves to the next node in the list by updating the current node pointer h to the next node (h-\>next).
- Once the loop finds that h is NULL, indicating there are no more nodes to count, it exits the loop.
- The function concludes by returning the total count of nodes (elements), effectively giving the length of the singly linked list.
<br>
```sh
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
```
<br>
## Add node

## Add node at the end

## Free list
