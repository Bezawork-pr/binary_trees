#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree
 *
 * @parent: pointer to the parent node
 *
 * @value: value to put in the new node
 *
 * NOTE: when created a node does not have a child
 * Return: A pointer to the new Node
 * Otherwise NULL on Failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
