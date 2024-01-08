#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: the measure of the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count_l = 0, count_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent == NULL)
		return (0);

	count_l = binary_tree_depth(tree->parent);
	count_r = binary_tree_depth(tree->parent);

	if (count_l < count_r)
		return (count_l + 1);
	else
		return (count_r + 1);
}
