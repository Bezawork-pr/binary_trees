#include "binary_trees.h"
/**
 * binary_tree_uncle - Write a function that finds the uncle of a node
 *
 * @node: is a pointer to the node to find the uncle
 *
 * Return: NULL if node is NULL
 * or if node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL ||
			node->parent->parent->left == NULL ||
			node->parent->parent->right == NULL)
		return (NULL);
	if (node->parent->parent->left &&
			(node->parent != node->parent->parent->left))
		return (node->parent->parent->left);
	else if (node->parent->parent->right &&
			(node->parent != node->parent->parent->right))
		return (node->parent->parent->right);
	return (NULL);
}
