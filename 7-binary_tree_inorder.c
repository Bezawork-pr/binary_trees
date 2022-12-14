#include "binary_trees.h"
/**
 * binary_tree_inorder - Write a function that
 * goes through a binary tree using in-order traversal
 *
 * @tree: is a pointer to the root node of the tree to traverse
 *
 * @func:  is a pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *left = tree;

	if (tree == NULL || func == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
	{
		func(tree->n);
		return;
	}
	while (left->left)
		left = left->left;
	func(left->n);
	left = left->parent;
	while (left)
	{
		func(left->n);
		if (left->right)
		{
			if (left == tree)
				break;
			func(left->right->n);
		}
		left = left->parent;
	}
	if (left->right)
		left = left->right;
	while (left->left)
		left = left->left;
	func(left->n);
	left = left->parent;
	func(left->n);
	if (left->right)
		func(left->right->n);
}
