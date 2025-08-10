#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Entry point
 *
 * @tree: function that measures the depth of a node in a binary tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
