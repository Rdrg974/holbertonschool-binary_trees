#include "binary_trees.h"

/**
 * depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the measure of the depth
 */

int depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root node of the binary tree to be checked
 * @d: the depth of the binary tree calculated by the calling function
 * @level: the current level of the tree being processed
 * Return: 1 if is perfect or 0 not perfect
 */

int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: Always 0 (Success)
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);

	d = depth(tree);
	return (is_perfect(tree, d, 0));
}

