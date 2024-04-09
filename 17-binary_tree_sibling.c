#include "binary_trees.h"
/**
 * binary_tree_siblingt - function that that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->right == node)
		return (node->parent->left);

	return (node->parent->right);
}
