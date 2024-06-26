#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);
	}

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}
/**
 * binary_tree_balance - function that measures the balance factor of
 * a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the balance of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
