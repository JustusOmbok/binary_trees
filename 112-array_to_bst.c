#include "binary_trees.h"

/**
 * array_to_bst - Builds a BST
 * @array: Pointer to first element oy the array
 * @size: No of elements in the array
 *
 * Return: Pointer to root node of created BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (bst_insert(&root, array[i]) == NULL)
			return (NULL);
	}

	return (root);
}
