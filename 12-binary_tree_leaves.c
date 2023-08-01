#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the number of leaf nodes in a binary tree
 * @tree: Pointer to the root/parent node of tree
 *
 * Return: Number of leaves nodes in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left)
		leaves += binary_tree_leaves(tree->left);

	if (tree->right)
		leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
