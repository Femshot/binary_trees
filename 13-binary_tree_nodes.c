#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root/parent node of tree
 *
 * Return: Number of nodes with atleast 1 child in a binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t child = 1;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left)
		child += binary_tree_nodes(tree->left);

	if (tree->right)
		child += binary_tree_nodes(tree->right);

	return (child);
}
