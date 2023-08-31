#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree
 * @tree: Pointer to root node
 * @func: Pointer to function to call
 *
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t *queue[1000];
	int front = 0, rear = 0;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		binary_tree_t *node = queue[front++];

		func(node->n);

		if (node->left)
			queue[rear++] = node->left;

		if (node->right)
			queue[rear++] = node->right;
	}
}
