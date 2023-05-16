#include "binary_trees.h"

/**
 * binary_tree_sibling - function that find the sibling of the node
 * @node: a pointer to the node to find the sibling
 *
 * Return: the sibling
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);

	sibling = node->parent;

	if (sibling->left == node)
	{
		return (sibling->right);
	}
	else
		return (sibling->left);

}
