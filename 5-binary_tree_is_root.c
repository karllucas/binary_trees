#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(
	__attribute__((unused))  const binary_tree_t *node
)
{
	if (
		node != NULL /* Check: Node Not null prevent segmenation fault */
		&& node->parent == NULL /* Check: Has no parent */
	)
		return (1);

	return (0);
}
