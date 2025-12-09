#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 0, if tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t check;

	if (!tree)
	{
		return (0);
	}

	if (!tree->right && !tree->left)
	{
	return (1);
	}

	if (tree->right != NULL && tree->left != NULL)
	{
	check = (binary_tree_is_full(tree->right)) &&
		(binary_tree_is_full(tree->left));
	return (check);
	}

	return (0);
}

