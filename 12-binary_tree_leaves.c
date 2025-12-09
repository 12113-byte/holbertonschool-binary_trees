#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of the tree
 * Return: 0, if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
		return (0);
	}
	if (!tree->right && !tree->left)
	{
		return (1);
	}
	size = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (size);
}

