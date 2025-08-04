#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node as right-child
 * @parent: parent node to add child to
 * @value: value to add to right node
 * Return: pointer to new node on success;
 * NULL if failure or parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
			return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;

	if (parent->right == NULL)
	{
		new_node->right = NULL;
		parent->right = new_node;
	}
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}
