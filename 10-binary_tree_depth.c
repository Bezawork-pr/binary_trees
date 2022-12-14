#include "binary_trees.h"
/**
 * binary_tree_depth - Write a function that measures
 * the depth of a node in a binary tree
 *
 * @tree: Where tree is a pointer to the node to measure the depth
 *
 * Return: Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *copy = tree;
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	while (copy->parent != NULL)
	{
		count++;
		copy = copy->parent;
	}
	return (count);

}
