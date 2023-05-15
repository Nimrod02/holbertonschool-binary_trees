#include "binary_trees.h"

/**
 * binary_tree_insert_left - main function that add a node to the left branch
 * @parent: parent node.
 * @value: store the data for the new nodes.
 *
 * Return: the new node
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
	free (newNode);
}
