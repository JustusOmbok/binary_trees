#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses through a binary tree
 * @tree: Pointer to the root node
 * @func: Pointer to function to call for each node
 *
 * If tree or func is NULL do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
