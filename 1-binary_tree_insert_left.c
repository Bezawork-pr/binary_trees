#include "binary_trees.h"
/**
 * binary_tree_insert_left - nserts a node as the left-child of another node
 *
 * @parent:  pointer to the node to insert the left-child in
 *
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node
 * otherwise: NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *copynode = NULL;
	binary_tree_t *newnode, *copyparent = parent;

	/* if root is NULL, return NULL */
	if (parent == NULL)
		return (NULL);

	/* copy root left child if root has left child */
	if (parent->left)
		copynode = parent->left;

	/* Create new node */
	newnode = binary_tree_node(copyparent, value);

	/* Return NULL if binary_tree_node returned NULL */
	if (newnode == NULL)
		return (NULL);

	/* fix pointer for transverse */
	/* if parent has children; copy children under new node*/
	if (parent->left != NULL)
	{
		copynode->parent = newnode;
		newnode->left = copynode;
	}
	/* Link parent and Created New node*/
	parent->left = newnode;
	newnode->parent = parent;
	return (newnode);
}
