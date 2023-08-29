#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A node is checked if it's a leaf
 * @node: Node to be checked's pointer
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
