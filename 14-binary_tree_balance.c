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

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
