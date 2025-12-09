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
		return (-1);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (my_max(right_height, left_height) + 1);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root node
 * Return: 0, if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance;

	if (tree == NULL)
	{
		return (0);
	}
	balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	return (balance);
}

