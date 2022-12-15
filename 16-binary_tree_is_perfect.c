#include "binary_trees.h"
/**
 * pow_ - find the power
 *
 * @x: base
 *
 * @y: power
 *
 * Return: power
 */
int pow_(int x, int y)
{
	int power = 1, i;

	for (i = 1; i <= y; ++i)
		power = power * x;
	return (power);
}
/**
 * max - find max
 *
 * @num1: num
 *
 * @num2: num
 *
 * Return: max
 */
size_t max(size_t num1, size_t num2)
{
	if (num1 >= num2)
		return (num1);
	else
		return (num2);
}
/**
 * height_ - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Height, otherwise 0 on failure
 */
size_t height_(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);
	else if (tree->right == NULL && tree->left == NULL)
		return (0);
	leftheight = height_(tree->left);
	rightheight = height_(tree->right);
	return (max(leftheight, rightheight) + 1);
}
/**
 * leaves_ - counts the leaves in a binary tree
 *
 * @tree:  pointer to the root node of the tree
 *
 * Return: Number of leaves,
 * 0 if tree is NULL
 */
size_t leaves_(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (leaves_(tree->left) + leaves_(tree->right));
}

/**
 * binary_tree_is_perfect - a function that checks
 * if a binary tree is perfect
 *
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = height_(tree);
	int perfectleaves = pow_(2, height);
	int leaves = leaves_(tree);

	if (tree == NULL)
		return (0);
	if (perfectleaves == leaves)
		return (1);
	return (0);
}
