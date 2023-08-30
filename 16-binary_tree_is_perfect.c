#include "binary_trees.h"
/**
 * its__depth - Measure depth of a node
 * @tree: Pointer to the node to be measured
 *
 * Return: Depth of the node or 0
 */
int its_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * perfect_tree - Counts tree leaves
 * @tree: Pointer to the root node
 * @depth: left-side depth
 * @level: chain's depth
 *
 * Return: 1 if perfect or 0
 */
int perfect_tree(const binary_tree_t *tree, int depth, int level)
{
	if (!tree)
		return (1);
	if (!tree->left && !tree->right)
	{
		if (depth == (level + 1))
			return (1);
		return (0);
	}
	if (!tree->left || !tree->right)
		return (0);
	return (perfect_tree(tree->right, depth, level + 1) &&
			perfect_tree(tree->left, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	depth = its_depth(tree);

	if (!tree)
		return (0);
	return (perfect_tree(tree, depth, 0));
}
