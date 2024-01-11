#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: NULL if node/parent is NULL or has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	sibling = node;

	if (sibling->parent->left != node)
	{
		if (sibling->parent->left != NULL)
			return (sibling->parent->left);
	}

	if (sibling->parent->right != node)
	{
		if (sibling->parent->right != NULL)
			return (sibling->parent->right);
	}

	return (0);
}
