#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	if (tree->left != NULL && tree->right == NULL)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 1 && right == 1)
		return (1);

	return (0);
}
