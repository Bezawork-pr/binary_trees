#include "binary_trees.h"
/**
 * binary_tree_preorder - Write a function that goes
 * through a binary tree using pre-order traversal
 *
 * @tree: Pointer to root node
 *
 * @func: is pointer to function
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *left;

	if ((tree == NULL) || (func == NULL))
		return;
	left = tree;
	func(left->n);
	if (tree->left == NULL && tree->right == NULL)
		return;
	left = left->left;
	while (left->left)
	{
		func(left->n);
		left = left->left;
	}
	func(left->n);
	if (left->right)
		func(left->right->n);
	left = left->parent;
	while (left->right)
	{
		func(left->right->n);
		if (left->parent == NULL)
			break;
		left = left->parent;
	}
	if (left->right)
		left = left->right->left;
	while (left->left)
	{
		func(left->n);
		left = left->left;
	}
	func(left->n);
	if (left->parent->right)
		left = left->parent->right;
	while (left->right)
	{
		func(left->n);
		left = left->right;
	}
	func(left->n);
}

