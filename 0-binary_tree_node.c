#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, otherwise NULL on failure
 */
binary_tree_t *binary_tree_node(
	__attribute__((unused)) binary_tree_t *parent,
	__attribute__((unused)) int value
)
{
	/* Create new node */
	binary_tree_t *new_node; /* Pointer to binary_tree_t strucut */

	new_node = malloc(sizeof(binary_tree_t)); /* Allocate memory for node*/
	if (new_node == NULL)	/* Check: Unsuccessfully memory allocation*/
		return (NULL);

	/* Assign node values */
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
