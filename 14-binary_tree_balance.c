#include"binary_tress.h"
/**
 * binary_tree_balance - function name
 * @tree: tree to calculate its balance
 *
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

#include "binary_trees.h"

/**
 * binary_tree_height - Height of the tree
 *
 * @tree: tree
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
}
