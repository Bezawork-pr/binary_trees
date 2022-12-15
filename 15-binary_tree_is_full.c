#include "binary_trees.h"
/**
 * max - find max
 *
 * @num1: num
 *
 * @num2: num
 *
 * Return: max
 */
int max(int num1, int num2)
{
	if (num1 >= num2)
		return (num1);
	else
		return (num2);
}
/**
 * height - measures the height of a binary tree
 *
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: Height, otherwise 0 on failure
 */
int height(const binary_tree_t *tree)
{
	int leftheight, rightheight;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left != NULL)
		return (0);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	leftheight = height(tree->left);
	rightheight = height(tree->right);
	return (max(leftheight, rightheight) + 1);
}
/**
 * balance - Write a function that measures the balance factor
 * of a binary tree
 *
 * @tree: a pointer to the root node
 *
 * Return: Balance factor,
 * if tree is NULL return 0
 */
int balance(const binary_tree_t *tree)
{
	int leftheight = height(tree->left);
	int rightheight = height(tree->right);

	if (tree == NULL)
		return (0);
	return (leftheight - rightheight);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: pointer to the root node
 *
 * Return: Full or not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (balance(tree) == 0)
		return (1);
	return (0);
}
