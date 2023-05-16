#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full or not
 * @tree: pointer to the root node of the tree
 *
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int isfull = 0;

	if (!tree)
		return (0);

	return (isFull(isfull, tree));
}
/**
 * isFull - binary tree is full recursive
 * @is_Full: verificates if a binary tree is full or not
 * @tree: a pointer to the node of the binary tree
 * Return: 1 if full otherwise 0
 */
int isFull(int is_Full, const binary_tree_t *tree)
{
	int left = 1, right = 1;

	if (tree->left && !tree->right)
		return (0);
	if (tree->right && !tree->left)
		return (0);
	if (tree->left)
		left = isFull(is_Full, tree->left);
	if (tree->right)
		right = isFull(is_Full, tree->right);
	if (left != right || left + right == 0)
		return (0);
	else
		return (1);
}









