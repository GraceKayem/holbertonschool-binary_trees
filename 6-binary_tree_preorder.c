#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Entry point
 *
 * @tree: function that goes through a binary tree using pre-order traversal
 * @func: function that goes through a binary tree using pre-order traversal
 *
 * Return: Always 0 (Success)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);

}
