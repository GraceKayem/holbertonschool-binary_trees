#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Entry point
 *
 * @tree: function that checks if a binary tree is perfect
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
	{
		return (0);
	}

	depth = binary_tree_depth(tree);
	return (binary_tree_is_perfect(tree, depth, 0));
}
