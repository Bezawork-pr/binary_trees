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
       
	if (parent->left != NULL)
		copynode = parent->left;
	printf("where 0");
	newnode = binary_tree_node(copyparent, value);
	printf("where 1");
	if (newnode == NULL)
		return (NULL);
	printf("Where 2");
	parent->left = newnode;
	printf("Where 3");
	if (copynode)
		newnode->left = copynode;
	printf("where 4");
	return (newnode);
}
