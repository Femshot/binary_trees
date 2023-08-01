#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a tree using preorder traversal
 * @tree: Pointer to root of tree
 * @func: Pointer to a function to print value in node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
