#include "binary_trees.h"

/**
 * binary_tree_height - Height of the tree
 *
 * @tree: tree
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftside;
	size_t rightside;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leftside = binary_tree_height(tree->left);
		rightside = binary_tree_height(tree->right);
		if (leftside > rightside)
		{
			return (leftside);
		}
		else
		{
			return (rightside);
		}
	}
}
