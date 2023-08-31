#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a BST
 * @tree: Double pointer to root node
 * @value: Value to be stored in the created node
 *
 * Return: Pointer to created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	if (!tree)
		return (NULL);

	if (*tree == NULL)
	{
		new_node = binary_tree_node(NULL, value);
		if (!new_node)
			return (NULL);
		*tree = new_node;
		return (new_node);
	}

	if (value == (*tree)->n)
		return (NULL);

	if (value < (*tree)->n)
	{
		if ((*tree)->left)
			return (bst_insert(&((*tree)->left), value));
		new_node = binary_tree_node(*tree, value);
		if (!new_node)
			return (NULL);
		(*tree)->left = new_node;
		return (new_node);
	}

	if (value > (*tree)->n)
	{
		if ((*tree)->right)
			return (bst_insert(&((tree)->right), value));
		new_node = binary_tree_node(*tree, value);
		if (!new_node)
			return (NULL);
		(*tree)->right = new_node;
		return (new_node);
	}

	return (NULL);
}
