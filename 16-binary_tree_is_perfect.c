#include "binary_trees.h"

/**
 * binary_tree_size - function find size tree binary
 * @tree:  benary tree
 * Return: size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - function if tree binary is perfect
 * @tree:  benary tree
 * Return: size
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);




	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);


	if ((tree->left == NULL) || (tree->right == NULL))
		return (0);

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right) &&
		(binary_tree_size(tree->left) == binary_tree_size(tree->right)));
	}
	return (0);
}
