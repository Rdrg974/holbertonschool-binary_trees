#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right != NULL)
	{
		value = parent->right->n;
		parent->right = new_node;
		binary_tree_insert_right(parent->right, value);
	}
	parent->right = new_node;
	return (parent);
}
