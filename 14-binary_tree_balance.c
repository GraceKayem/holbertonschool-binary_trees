#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftHeight = 0;
    size_t rightHeight = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        leftHeight = 1 + binary_tree_height(tree->left);

    if (tree->right)
        rightHeight = 1 + binary_tree_height(tree->right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor (height of left subtree - height of right subtree),
 *         or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    size_t leftHeight = 0;
    size_t rightHeight = 0;

    if (tree == NULL)
        return (0);

    if (tree->left)
        leftHeight = 1 + binary_tree_height(tree->left);

    if (tree->right)
        rightHeight = 1 + binary_tree_height(tree->right);

    return (int)(leftHeight - rightHeight);
}

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
    if (newNode == NULL)
        return (NULL);

    newNode->n = value;
    newNode->parent = parent;
    newNode->left = NULL;
    newNode->right = NULL;

    return (newNode);
}

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = binary_tree_node(parent, value);
    if (newNode == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        newNode->left = parent->left;
        parent->left->parent = newNode;
    }
    parent->left = newNode;

    return (newNode);
}

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = binary_tree_node(parent, value);
    if (newNode == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        newNode->right = parent->right;
        parent->right->parent = newNode;
    }
    parent->right = newNode;

    return (newNode);
}
