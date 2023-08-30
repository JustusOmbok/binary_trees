#include "binary_trees.h"

/**
 * binary_tree_depth - Measure depth of a node
 * @tree: Pointer to the node to be measured
 *
 * Return: Depth of the node or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
