#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 */

/*
 * Pseudocode, traverse all nodes and free each
 * 1. Recursively traverse left subtree.
 * 2.	free current node
 * 3. Recursively traverse right subtree.
 * 4.	free current node
 */
void binary_tree_delete(
	__attribute__((unused)) binary_tree_t *tree
)
{
	if (tree == NULL)
		return;

	/* Recursively traverse left subtree */
	if (tree->left != NULL)	/* Check: Free if not empty*/
	{
		binary_tree_delete(tree->left);
		free(tree->left); /* Free current left node*/
	}

	/* Recursively traverse right subtree */
	if (tree->right != NULL)	/* Check: Free if not empty*/
	{
		binary_tree_delete(tree->right);
		free(tree->right); /* Free current right node*/
	}

	free(tree); /* Free parent node */
}
