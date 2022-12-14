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
	const binary_tree_t *left = tree, *right, *parent;
	int flag = 0;

	if (tree == NULL  || func == NULL)
		return;
	while (left->left)
	{
		func(left->n);
		left = left->left;
		flag = 1;
	}
	func(left->n);
	while (flag == 1)
	{
		if (left->right != NULL)
			func(left->right->n);
		if (left->parent == NULL)
			flag = 0;
		parent = left->parent;
		left = parent;
	}
	right = tree;
	right = right->right->left;
	flag = 1;
	while (flag == 1)
	{
		func(right->n);
		right = right->parent;
		if (right->right)
		{
			func(right->right->n);
			flag = 0;
		}
		if (right == NULL)
			flag = 0;
	}
}

