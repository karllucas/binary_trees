#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 *	of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the new node, otherwise NULL on failure
 */
binary_tree_t *binary_tree_insert_right(
	__attribute__((unused)) binary_tree_t *parent,
	__attribute__((unused)) int value
)
{
	if (parent == NULL) /* Check: Parent null*/
		return (NULL);

	/* Create new node */
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)	/* Check: Unsuccessfully memory allocation*/
		return (NULL);

	/* If there is a right node in parent, make it right child of new_node */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	/* Attach node to left of parent node */
	parent->right = new_node;

	return (new_node);
}
