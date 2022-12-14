#include "binary_trees.h"
/**
 * binary_tree_postorder - Write a function that goes
 * through a binary tree using post-order traversal
 *
 * @tree:  is a pointer to the root node of the tree to traverse
 *
 * @func: is a pointer to a function to call for each node
 *
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *left = tree, *parent;
	int flag = 0;

	if (tree == NULL || func == NULL)
		return;
	if (tree->right == NULL && tree->left == NULL)
	{
		func(tree->n);
		return;
	} 
	while (left->left)
	{
		left = left->left;
		flag = 1;
	}
	while (flag == 1)
	{
		parent = left->parent;
		if (left->right)
			func(left->right->n);
		func(left->n);
		left = parent;
		if (parent->parent == NULL)
			flag = 0;
	}
	left = left->right;
	while (left->left)
	{
		left = left->left;
		flag = 1;
	}
	func(left->n);
	left = left->parent;
	if (left->right)
		func(left->right->n);
	func(left->n);
	func(tree->n);
}
