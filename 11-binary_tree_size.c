#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size = 0;

	if (tree == NULL)
		return (0);

	else
	{
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size + 1);
}
