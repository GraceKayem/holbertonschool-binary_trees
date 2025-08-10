#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Entry point
 *
 * @tree: function that counts the nodes with at least 1 child in a binary tree
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if ((tree->left != NULL) != (tree->right != NULL))
	{
		count = 1;
	}

	return (count + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}
