# binary_trees
This task is all about working with binary trees. A Binary Tree is a special datastructure used for data storage purposes. It has the benefits of both an ordered array and a linked list as search is as quick as in a sorted array and insertion or deletion operation are as fast as in linked list.

**leaf node**
Node without child nodes.

**Root Node**
The topmost node in the tree, no parent node

## Binary Tree Operations
### Pre-order traversal
Root node is visited first, then the left subtree and finally the right subtree.


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

betty 5-binary_tree_is_root.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 5-binary_tree_is_root.c tests/5-main.c 0-binary_tree_node.c 2-binary_tree_insert_right.c -o 5-root; ./5-root

## 6. Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal

6-binary_tree_preorder.c

betty 6-binary_tree_preorder.c ; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/6-main.c 6-binary_tree_preorder.c 0-binary_tree_node.c -o 6-pre; ./6-pre


## 7. In-order traversal
Write a function that goes through a binary tree using in-order traversal.

7-binary_tree_inorder.c

## 8. Post-order traversal 
Write a function that goes through a binary tree using post-order traversal

8-binary_tree_postorder.c



## 18. Uncle

18-binary_tree_uncle.c

betty 18-binary_tree_uncle.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/18-main.c 18-binary_tree_uncle.c 0-binary_tree_node.c -o 18-uncle; ./18-uncle


## 17. Sibling
Write a function that finds the sibling of a node

17-binary_tree_sibling.c

betty 17-binary_tree_sibling.c; gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c tests/17-main.c 17-binary_tree_sibling.c 0-binary_tree_node.c -o 17-sibling; ./17-sibling









