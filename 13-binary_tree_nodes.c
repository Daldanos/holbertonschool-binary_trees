#include"binary_trees.h"

/**
 * binary_tree_nodes - function name
 * @tree: tree to be count
 *
 * Return: counts the nodes with at least 1 child in a binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	return (left_count + right_count + (tree->left || tree->right));
}
