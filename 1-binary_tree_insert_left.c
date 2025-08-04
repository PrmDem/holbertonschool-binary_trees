#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child
 * @parent: parent node to add child to
 * @value: value to add to left node
 * Return: pointer to new node on success;
 * NULL if failure or parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left == NULL)
	{
		new_node->left = NULL;
		parent->left = new_node;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	return (new_node);
}
