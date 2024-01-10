#include "binary_trees.h"

/**
 * binary_tree_sibling - function name
 * @node: tree to check
 *
 * Return: sibling of
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (parent->left && parent->right)
	{
		if (parent->left == node)
			return (parent->right);
		else
			return (parent->left);
	}

	return (NULL);
}
