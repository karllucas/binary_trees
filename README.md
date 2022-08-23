# binary_trees
This task is all about working with binary trees. A Binary Tree is a special datastructure used for data storage purposes. It has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.


**leaf node**
Node without child nodes.

**Root Node**
The topmost node in the tree, no parent node

## Repo
git clone https://github.com/karllucas/binary_trees.git

# Tasks

## 0. New node
Write a function that creates a binary tree node.

0-binary_tree_node.c

betty 0-binary_tree_node.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/0-main.c 0-binary_tree_node.c -o 0-node; ./0-node

## 1. Insert left
Write a function that inserts a node as the left-child of another node.

1-binary_tree_insert_left.c

betty 1-binary_tree_insert_left.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left; ./1-left

## 2. Insert right 
Write a function that inserts a node as the right-child of another node


betty 2-binary_tree_insert_right.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right; ./2-right

## 3. Delete
Write a function that deletes an entire binary tree

betty 2-binary_tree_insert_right.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/2-main.c 2-binary_tree_insert_right.c 0-binary_tree_node.c -o 2-right; ./2-right

## 4. Is leaf
Write a function that checks if a node is a leaf

betty 3-binary_tree_delete.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 4-binary_tree_is_leaf.c tests/4-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 4-leaf; ./4-leaf 

## 5. Is root
Write a function that checks if a given node is a root

5-binary_tree_is_root.c



