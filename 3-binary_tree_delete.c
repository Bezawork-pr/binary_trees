#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: The binary tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left = tree, *right, *parent;
	int flag = 0;

	while (left->left)
	{
		left = left->left;
		flag = 1;
	}
	while (flag == 1)
	{
		parent = left->parent;
		if (left->right)
			free(left->right);
		free(left);
		left = parent;
		if (parent->parent == NULL)
			flag = 0;
	}
	right = tree;
	while (right->right)
	{
		right = right->right;
		flag = 1;
	}
	while (flag == 1)
	{
		parent = right->parent;
		if (right->left)
			free(right->left);
		free(right);
		right = parent;
		if (parent->parent == NULL)
			flag = 0;
	}
	if (tree != NULL)
		free(tree);
}
