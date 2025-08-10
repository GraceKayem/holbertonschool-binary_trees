#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Entry point
 *
 * @tree: function that measures the height of a binary tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rigthHeight;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return 0;
	}
	
	leftHeight = binary_tree_height(tree->left);
	rigthHeight = binary_tree_height(tree->right);

	return ((leftHeight > rigthHeight ? leftHeight : rigthHeight) + 1);
}
