#include "binary_trees.h"

/**
 * binary_tree_is_full - function find size tree binary
 * @tree:  benary tree
 * Return: 1 if is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if ((tree->left != NULL) && (tree->right != NULL))
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	if ((tree->left == NULL) &&  (tree->right == NULL))
		return (1);

	return (0);
}
