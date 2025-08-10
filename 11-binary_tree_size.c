#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Entry point
 *
 * @tree: function that measures the size of a binary tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 1;

	if (!tree)
	{
		return (0);
	}

	count += binary_tree_size(tree->left);
	count + = binary_tree_size(tree->right);

	return (count);
}
