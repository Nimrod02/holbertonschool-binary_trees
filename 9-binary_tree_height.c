#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: if tree NULL return 0 ifelse size_t of tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftSize = 0;
	size_t rightSize = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftSize = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		rightSize = 1 + binary_tree_height(tree->right);

	if (leftSize > rightSize)
		return (leftSize);
	else
		return (rightSize);
}
