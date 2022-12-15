#include "binary_trees.h"
/**
 * binary_tree_nodes -  that counts the nodes with at least 1 child
 *
 * @tree: tree is a pointer to the root node
 *
 * Return: Count of nodes with at least 1 child
 * 0 if tree is NULL
 * NOTE A NULL pointer is not a tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else if (tree->right == NULL && tree->left == NULL)
		return (0);
	return (binary_tree_nodes(tree->right) + 1 + binary_tree_nodes(tree->left));
}
