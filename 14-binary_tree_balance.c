#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of a binary tree
 * @tree: Pointer to root node
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	else if (tree->left || tree->right)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height + 1);
		return (right_height + 1);
	}
	else
		return (0);
}

/**
 * binary_tree_balance - Measure the balance factor of a node
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
