#include "binary_trees.h"
/**
 * binary_tree_insert_right - Write a function that
 * inserts a node as the right-child of another node
 *
 * @parent: parent to insert new right node
 *
 * @value: value to inserted in newnode
 *
 * Return: Pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *copynode = NULL;
	binary_tree_t *newnode, *copyparent = parent;

	/* if root is NULL, return NULL */
	if (parent == NULL)
		return (NULL);

	/* copy root right child if root has right child */
	if (parent->right)
		copynode = parent->right;

	/* Create new node */
	newnode = binary_tree_node(copyparent, value);

	/* Return NULL if binary_tree_node returned NULL */
	if (newnode == NULL)
		return (NULL);

	/* fix pointer for transverse */
	/* if parent has children; copy children under new node*/
	if (parent->right != NULL)
	{
		copynode->parent = newnode;
		newnode->right = copynode;
	}
	/* Link parent and Created New node*/
	parent->right = newnode;
	newnode->parent = parent;
	return (newnode);
}
