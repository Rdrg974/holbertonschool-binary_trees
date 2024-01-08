#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: the number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left != NULL && tree->right != NULL)
			return (2);
		if (tree->left == NULL || tree->right == NULL)
			return (1);
	}
	return (0);
}
