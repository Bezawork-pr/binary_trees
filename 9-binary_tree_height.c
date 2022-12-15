#include "binary_trees.h"
size_t max(size_t num1, size_t num2)
{
	if (num1 >= num2)
		return (num1);
	else
		return (num2);
}
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Height, otherwise 0 on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftheight, rightheight;

	if (tree == NULL)
		return (0);
	else if (tree->right == NULL && tree->left == NULL)
		return (0);
	leftheight = binary_tree_height(tree->left);
	rightheight = binary_tree_height(tree->right);
	return max(leftheight, rightheight) + 1;
}
