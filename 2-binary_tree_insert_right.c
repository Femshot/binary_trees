#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of parent node
 * @parent: A pointer to the parent node
 * @value: The value to put in the inserted new node
 *
 * Return: A pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL || value == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	else
	{
		node->right = NULL;
	}
	parent->right = node;
	node->left = NULL;
	return (node);
}
