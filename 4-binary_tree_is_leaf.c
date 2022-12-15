#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Write a function
 * that checks if a node is a leaf
 *
 * @node:  is a pointer to the node to check
 *
 * Return: 1 if there is leaf,
 * otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*if (node->left != NULL || node->right != NULL || node == NULL)
		return (0);
	return (1);*/
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
