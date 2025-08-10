#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Entry point
 *
 * @parent: function that inserts a node as the left-child of another node
 * @value: function that inserts a node as the left-child of another node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
