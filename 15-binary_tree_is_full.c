#include "binary_trees.h"

/**
 * binary_tree_is_full - main function that says if the tree is full or not
 * @tree: the binary tree.
 *
 * Return: is it full or not
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right != NULL && tree->parent != NULL)
		return (1);

	return (0);
}
