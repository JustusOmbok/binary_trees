#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts nodes with atleast one child
 * @tree: Pointer to root node
 *
 * Return: Number of nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
