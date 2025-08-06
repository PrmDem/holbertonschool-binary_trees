#include "binary_trees.h"

/**
 * binary_tree_depth - function find depth tree binary
 * @tree:  benary tree
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
