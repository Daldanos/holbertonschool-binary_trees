#include"binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return 1;

	int left_depth = 0, right_depth = 0;
	int left_perfect = 1, right_perfect = 1;

	if (tree->left)
	{
		left_depth = binary_tree_is_perfect(tree->left);
		left_perfect = left_depth > 0;
	}

	if (tree->right)
	{
		right_depth = binary_tree_is_perfect(tree->right);
		right_perfect = right_depth > 0;
	}

	if (left_perfect && right_perfect && left_depth == right_depth)
		return left_depth + 1;

	return 0;
}
