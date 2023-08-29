#include "binary_trees.h"

/**
 * binary_tree_height - Measure height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_hight = binary_tree_height(tree_right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
