#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: node parent
 * @value: node value
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL) /* Check: Parent null*/
		return (NULL);

	/* Create new node */
	new = malloc(sizeof(binary_tree_t));
	
	if (new == NULL) /* Check: Unsuccessfully memory allocation*/
		return (NULL);

	/* Fill nodes with their respective values */
	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;
	
	/* If there is a left node in parent, make it left child of new_node */
	if (parent->left != NULL)
		parent->left->parent = new;
        
	parent->left = new; /* Attach node to left of parent node */

	return (new);
}
