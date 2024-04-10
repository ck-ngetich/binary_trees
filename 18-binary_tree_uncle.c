#include "binary_trees.h"

/**
 * binary_tree_uncle - function to finds the uncle of a node in a binary tree.
 * @node: pointer to the node to find the uncle of node
 * Return: NULL if node is NULL or has no uncle,else pointer
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
i	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
