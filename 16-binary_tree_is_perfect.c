#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of a binary tree
 * @tree: Pointer to the root node
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
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	return (nodes == (1 << height) - 1);
}
