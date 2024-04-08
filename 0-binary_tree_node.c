#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_node - create a binary tree node.
 * @parent: a pointer to the parent node.
 * @value: value in node.
 * Return: error - NULL/  else pointer to the node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = NULL;
	*parent = *new_node;
	return (new_node);
}
