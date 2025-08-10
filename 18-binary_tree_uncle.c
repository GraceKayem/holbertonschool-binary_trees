#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Entry point
 *
 * @node: function that finds the uncle of a node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}

	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}

	return (NULL);
}
