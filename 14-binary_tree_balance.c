#include "binary_trees.h"

/**
 * max - finds values for left and right branches
 * @left: left branch
 * @right: right branch
 * Return: value of left and right as int.
 */
int max(int left, int right)
{
	if (left >= right)
		return (left);

	else
		return (right);
}

/**
 * balance_is - checks for balance factor of tree
 * @tree: pointer to tree
 * Return: balance as an int
 * 0 if tree is null.
 */
int balance_is(const binary_tree_t *tree)
{
	int hleft, hright;

	if (tree == NULL)
		return (0);

	hleft = balance_is(tree->left);
	hright = balance_is(tree->right);

	return (max(hleft, hright) + 1);
}

/**
 * binary_tree_balance - gets balance factor of tree
 * @tree: pointer to tree
 * Return: balance as an int
 * 0 if tree is null.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	balance = (balance_is(tree->left) - balance_is(tree->right));

	return (balance);
}
