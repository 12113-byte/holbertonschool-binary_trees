#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right child in
 * @value: to store in new node
 * Return: pointer to created node on sucess, otherwise NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_right;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		old_right = parent->right;
		new_node->right = old_right;
		old_right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}

