#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the deepth of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the deepth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int deepth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	else
		deepth = binary_tree_depth(tree->parent);

	return (deepth + 1);
}
