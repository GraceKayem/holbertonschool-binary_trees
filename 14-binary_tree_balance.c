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
	size_t leftHeight = 0;
	size_t rigthHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		leftHeight = 1 + binary_tree_balance(tree->left);
	}

	if (tree->right)
	{
		rigthHeight = 1 + binary_tree_balance(tree->right);
	}

	return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - Entry point
 *
 * @tree: function that measures the balance factor of a binary tree
 *
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rigthHeight = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left)
	{
		leftHeight = 1 + binary_tree_height(tree->left);
	}

	if (tree->right)
	{
		rightHeight = 1 + binary_tree_height(tree->right);
	}

	return (int)(leftHeight - rightHeight);
}
