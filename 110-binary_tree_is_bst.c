#include "binary_trees.h"

/**
 * is_bst_helper - Checks if binary tree is valid
 * @tree: Pointer to the root node
 * @min: Pointer to minimum allowed value
 * @max: Pointer to maximum allowed value
 *
 * Return: 1 if valid bst, or 0
 */
int is_bst_helper(const binary_tree_t *tree, int *min, int *max)
{
	if (!tree)
		return (1);

	if ((min && tree->n <= *min) || (max && tree->n >= *max))
		return (0);

	return (is_bst_helper(tree->left, min, (int *)&tree->n) &&
			is_bst_helper(tree->right, (int *)&tree->n, max));
}

/**
 * binary_tree_is_bst - checks if a tree is valid binary search tree
 * @tree: Pointer to root node
 *
 * Return: 1 if tree is valid bst, OR 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_bst_helper(tree, NULL, NULL));
}
