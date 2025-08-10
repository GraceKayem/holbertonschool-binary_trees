#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Entry point
 *
 * @tree: function that goes through a binary tree using post-order traversal
 * @func: function that goes through a binary tree using post-order traversal
 *
 * Return: Always 0 (Success)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);

}
