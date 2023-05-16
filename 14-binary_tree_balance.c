#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree\
 *
 * Return: the balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int nodeQ = 1;

	if (!tree)
		return (0);
	return (balance(nodeQ, tree->left) - balance(nodeQ, tree->right));
}

/**
 * balance - calculates the balance factor of a binary tree
 * @nodeQuantity: quantity of node
 * @tree: pointer to the root node of the tree
 *
 * Return: the balance factor
*/

int balance(int nodeQuantity, const binary_tree_t *tree)
{
	int left = 0, right = 0, result = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = balance(nodeQuantity + 1, tree->left);

	if (tree->right)
		right = balance(nodeQuantity + 1, tree->right);

	if (left > right)
		result = left + 1;

	else
		result = right + 1;

	return (result);
}
