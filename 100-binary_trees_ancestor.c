#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes
 * @first: Pointer to first node
 * @second: Second node pointer
 *
 * Return: Pointer to lowest common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (binary_tree_is_descendant(second, first))
		return ((binary_tree_t *)first);

	if (binary_tree_is_descendant(first, second))
		return ((binary_tree_t *)second);

	return (binary_trees_ancestor(first->parent, second));
}

/**
 * binary_tree_is_descendant - Node is checked if its a descendant
 * @node: Potential descendant node pointer
 * @ancestor: Ancestor node pointer
 *
 * Return: 1 if node is descendant, or 0
 */
int binary_tree_is_descendant(const binary_tree_t *node,
		const binary_tree_t *ancestor)
{
	if (node == NULL)
		return (0);
	if (node == ancestor)
		return (1);

	return (binary_tree_is_descendant(node->parent, ancestor));
}
