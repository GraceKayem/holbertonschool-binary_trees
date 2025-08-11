#include <stdlib.h>
#include <stdio.h>
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

/**
 * binary_tree_insert_right - Entry point
 *
 * @parent: function that inserts a node as the right-child of another node
 * @value: function that inserts a node as the right-child of another node
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

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}

/**
 * binary_tree_nodes - Entry point
 *
 * @tree: function that counts the nodes with at least 1 child in a binary tree
 *
 * Return: Always 0 (Success)
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	int count = 0;

	if ((tree->left != NULL) != (tree->right != NULL))
	{
		count = 1;
	}

	return (count + binary_tree_nodes(tree->left)
		+ binary_tree_nodes(tree->right));
}
