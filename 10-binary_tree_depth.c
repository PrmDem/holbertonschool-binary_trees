#include "binary_trees.h"

/**
 * depth - function find depth tree binary
 * @tree:  benary tree
 * Return: depth tree->parent
 */
int depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - function find depth tree binary
 * @tree:  benary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (depth(tree));
}
