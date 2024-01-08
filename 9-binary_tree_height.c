#include "binary_trees.h"

/**
 * binary_tree_height - Height of the tree
 *
 * @tree: tree
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t leftside = binary_tree_height(tree->left);
	size_t rightside = binary_tree_height(tree->right);
	
	return (1 + (leftside > rightside ? leftside : rightside));
}
