#include "binary_trees.h"

/**
 * binary_tree_sibling - function to finds the sibling of node in a binary tree.
 * @node: pointer to the node to find the sibling
 * Return: NULL if node is NULL or absent sibling,else pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
