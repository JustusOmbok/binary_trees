#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds uncle of a node
 * @node: Pointer to the node to find its uncle
 *
 * Return: Pointer to uncle node, else null
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
