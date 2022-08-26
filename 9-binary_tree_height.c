#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height root, otherwise 0
 */

/*
 * Pseudocode
 * 1. Get left node height recursively
 * 2. Get right node height recursively
 * 3. Return (the max of step 1 and 2) + 1
 */
size_t binary_tree_height(
	__attribute__((unused)) const binary_tree_t *tree
)
{
	if (tree != NULL)
	{
		int leftHeight = 0;
		int rightHeight = 0;

		if (tree->left)
			/* Get height left node*/
			leftHeight = binary_tree_height(tree->left) + 1;

		if (tree->right)
			/* Get height right node*/
			rightHeight = binary_tree_height(tree->right) + 1;

		int max = leftHeight;

		/* Get max height between leftHeight and rightHeight */
		if (rightHeight > max)
			max = rightHeight;

		return (max);
	}

	return (0);
}
