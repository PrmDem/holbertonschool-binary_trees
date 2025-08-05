#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes that aren't leaves
 * @tree: pointer to root of tree to count in
 * Return: number of non-leaf nodes
 * or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (0);
}
