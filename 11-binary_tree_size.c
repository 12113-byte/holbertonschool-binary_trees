#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of the tree
 * Return: 0, if tree is NULL, otherwise number of nodes
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
	{
		return (0);
	}
	size = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (size);
}

