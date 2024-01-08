#include "binary_trees.h"

/**
 * binary_tree_depth - Depth of the tree
 *
 * @tree: tree
 * Return: Height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_side = binary_tree_depth(tree->left);
		right_side = binary_tree_depth(tree->right);
		if (left_side > right_side)
		{
			return (left_side + 1);
		}
		else
		{
			return (right_side + 1);
		}
	}
}
