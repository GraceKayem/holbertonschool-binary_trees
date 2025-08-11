#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight;
	size_t rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return ((leftHeight > rightHeight ? leftHeight : rightHeight) + 1);
}

/**
 * binary_tree_size - Entry point
 *
 * @tree: function that measures the size of a binary tree
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - Entry point
 *
 * @tree: function that checks if a binary tree is perfect
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t nodes;
	size_t expecNodes;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	expecNodes = (1 << (height + 1)) - 1;

	return (nodes == expecNodes);
}
