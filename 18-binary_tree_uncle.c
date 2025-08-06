#include "binary_trees.h"

/**
 * binary_tree_uncle - looks for uncle of a node
 * @node: node to find uncle for
 * Return: pointer to uncle node
 * or NULL if node or uncle is null.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent == node->parent->parent->left)
	{
		if (node->parent->parent->right != NULL)
			return (node->parent->parent->right);
		else
			return (NULL);
	}

	else if (node->parent == node->parent->parent->right)
	{
		if (node->parent->parent->left != NULL)
			return (node->parent->parent->left);
		else
			return (NULL);
	}

	return (0);
}
