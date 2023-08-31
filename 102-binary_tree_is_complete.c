#include "binary_trees.h"

/**
 * nodes_count - Number of nodes are counted
 * @tree: binary tree node
 *
 * Return: nodes in the tree
 */
int nodes_count(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + nodes_count(tree->left) + nodes_count(tree->right));
}

/**
 * its_complete - Checks if tree is complete
 * @tree: tree node
 * @index: index of the tree
 * @n: no of nodes
 * Return: 1 on success, or 0
 */
int its_complete(const binary_tree_t *tree, int index, int n)
{
	if (!tree)
		return (1);
	if (index >= n)
		return (0);
	return (its_complete(tree->left, (2 * index) + 1, n) &&
			its_complete(tree->right, (2 * index) + 2, n));
}

/**
 * binary_tree_is_complete - Checks if tree is complete
 * @tree: binary tree node
 *
 * Return: 1 if complete, or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int count_node = nodes_count(tree);

	return (its_complete(tree, 0, count_node));
}
