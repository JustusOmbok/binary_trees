#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of binary tree
 * @tree: Pointer to root node
 *
 * Return: Size of tree or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete - Checks if binary tree complete
 * @tree: Pointer to root node
 *
 * Return: 1 if tree complete, or 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size, i;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	
	for (i = 0; i < size; i++)
	{
		if (!print_level(tree, NULL, i + 1))
			return (0);
	}

	return (1);
}
