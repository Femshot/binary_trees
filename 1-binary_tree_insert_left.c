#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node
 * @parent: A pointer to the parent node
 * @value: The value to put in the inserted new node
 *
 * Return: A pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	else
	{
		node->left = NULL;
	}
	parent->left = node;
	node->right = NULL;
	return (node);
}
