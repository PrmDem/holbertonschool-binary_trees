#include "binary_trees.h"

/**
 * max - find max
 * @a: value a
 * @b: value b
 * Return: max
 */
int max(int a, int b)
{
	if (a >= b)
		return (a);

	else
		return (b);
}

/**
 * height - counts height of a binary tree
 * @tree: pointer to binary tree
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (max(height(tree->left), height(tree->right) + 1));
}

/**
 * binary_tree_height - recursive for binary tree
 * @tree: binary tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree));
}
