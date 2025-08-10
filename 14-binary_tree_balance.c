#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Entry point
 *
 * @tree: function that measures the balance factor of a binary tree
 *
 * Return: Always 0 (Success)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftBalance;
	int rightBalance;

	if (tree == NULL)
	{
		return (0);
	}

	leftBalance = binary_tree_height(tree->left);
	rightBalance = binary_tree_height(tree->right);

	return (leftBalance - rightBalance);
}
