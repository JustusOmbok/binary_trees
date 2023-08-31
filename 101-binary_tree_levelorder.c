#include "binary_trees.h"

/**
 * b_t_height - Height of a binary tree is got
 * @tree: Pointer to root node
 * Return: Tree height
 */
int b_t_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);

	left_height = b_t_height(tree->left);
	right_height = b_t_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * print_level - One level of binary is printed
 * @tree: Tree root pointer
 * @func: Pointer to function to print node value
 * @level: Level to print
 */
void print_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, func, level - 1);
		print_level(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - Traverses a binary tree
 * @tree: Pointer to root node
 * @func: Pointer to function to call
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, level;

	if (!tree || !func)
		return;

	height = b_t_height(tree);
	for (level = 1; level <= height; level++)
	{
		print_level(tree, func, level);
	}
}
