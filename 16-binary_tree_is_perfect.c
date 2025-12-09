#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * my_max - gets the bigger value
 * @value_one: value one
 * @value_two: value two
 * Return: the bigger value
 */

int my_max(int value_one, int value_two)
{
	if (value_one > value_two)
	{
		return (value_one);
	}
	else
	{
		return (value_two);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: if tree is NULL, return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (my_max(right_height, left_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 0, if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_side, right_side, left_perfect,
	       right_perfect, equal_height;

	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if ((!tree->left && tree->right != NULL) || (tree->left && !tree->right))
	{
		return (0);
	}
	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);
	left_perfect = binary_tree_is_perfect(tree->left);
	right_perfect = binary_tree_is_perfect(tree->right);
	equal_height = left_side == right_side;

	if (left_perfect && right_perfect && equal_height)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

