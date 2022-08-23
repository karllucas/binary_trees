# binary_trees
This task is all about working with binary trees. A Binary Tree is a special datastructure used for data storage purposes. It has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.

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


