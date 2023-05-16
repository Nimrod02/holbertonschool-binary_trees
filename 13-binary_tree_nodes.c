#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: if not a node NULL, else countNodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t countNodes = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL) || (tree->right != NULL))
		countNodes += 1;

	countNodes += binary_tree_nodes(tree->left);
	countNodes += binary_tree_nodes(tree->right);

	return (countNodes);
}
