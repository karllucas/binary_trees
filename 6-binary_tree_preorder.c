#include "binary_trees.h"

/**
 * binary_tree_is_root - function that goes through a binary tree using pre-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 *
 * Return: 1 if node is a root, otherwise 0
 */

/*
 * Pseudocode
 * 1. Print current node if not NULL
 * 2. Print left node by passing it to step 1 recursively
 * 3. Print right node by passing it to step 1 recursively
 */
void binary_tree_preorder(
	__attribute__((unused)) const binary_tree_t *tree,
	__attribute__((unused)) void (*func)(int))
{
	if (
		tree != NULL && /* Check: tree is not null, prevent segmentation fault */
		func != NULL) /* Check: func is not null, prevent segmentation fault*/
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);	/* Show Left node */
		binary_tree_preorder(tree->right, func); /* Show Right node */
	}
}
