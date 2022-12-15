#include "binary_trees.h"
/**
 * binary_tree_sibling - Write a function that finds the sibling of a node
 *
 * @node: node is a pointer to the node to find the sibling
 *
 * Return:  a pointer to the sibling node
 * NULL if parent is NULL or node is NULL
 * And if node has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
			(node->parent->left == NULL &&
			 node->parent->right == NULL))
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
