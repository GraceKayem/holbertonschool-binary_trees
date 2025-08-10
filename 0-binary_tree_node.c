#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Entry point
 *
 * @parent: function that creates a binary tree node
 * @value: function that creates a binary tree node
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
