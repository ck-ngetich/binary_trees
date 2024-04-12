#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - function that create a binary
 * tree code
 * @parent: pointer to the parent of the node to create.
 * @value: value to put in the new node
 * Return: Null if an error occurs,else pointer of new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_val;

	new_val = malloc(sizeof(binary_tree_t));
	if (new_val == NULL)
		return (NULL);

	new_val->n = value;
	new_val->parent = parent;
	new_val->left = NULL;
	new_val->right = NULL;

	return (new_val);
}
