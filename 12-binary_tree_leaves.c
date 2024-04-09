#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the number of leaves of the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));


}
