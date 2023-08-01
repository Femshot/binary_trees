#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size/number of nodes of a binary tree
 * @tree: Pointer to the root/parent node of tree
 *
 * Return: Size of binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);

	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size);
}
