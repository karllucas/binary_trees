#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 *	of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the new node, otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_left(
	__attribute__((unused)) binary_tree_t *parent,
	__attribute__((unused)) int value
)
{
	if (parent == NULL) /* Check: Parent null*/
		return (NULL);

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

	/* If there is a left node in parent, make it left child of new_node */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	/* Attach node to left of parent node */
	parent->left = new_node;

	return (new_node);
}
