#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height root, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int leftHeight = 0;
		int rightHeight = 0;

		if (tree->left)
		{
			leftHeight = binary_tree_height(tree->left) + 1;
		}

		if (tree->right)
		{
			rightHeight = binary_tree_height(tree->right) + 1;
		}

		int max = leftHeight;

		if (rightHeight > max)
		{
			max = rightHeight;
		}

		return (max);
	}

	return (0);
}
