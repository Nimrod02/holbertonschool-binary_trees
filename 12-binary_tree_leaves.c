#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of leaves
 * Return: If tree is NULL return 0, else return number of the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves = 0;
	size_t rightLeaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return 1;

	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);
	
	return (leftLeaves + rightLeaves);
}
