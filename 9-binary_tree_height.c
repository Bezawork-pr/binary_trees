#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Height, otherwise 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *left = tree, *right = tree;
	int count, leftcount = 1, rightcount = 1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	while (left->left)
	{
		leftcount++;
		left = left->left;
	}
	while (right->left)
	{
		rightcount++;
		right = right->left;
	}
	if (leftcount >= rightcount)
		count = leftcount;
	else
		count = rightcount;

	return (count);
}
