#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using a postorder traversal
 * @tree: pointer to the root node of the tree
 * @func: pointer to function to call for each node
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left, func);

	if (tree->right)
		binary_tree_postorder(tree->right, func);

	func(tree->n);
}
