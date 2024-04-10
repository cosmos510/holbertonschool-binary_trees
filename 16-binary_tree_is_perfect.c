#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_right = 0;
	int height_left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	else
	{
		height_left = binary_tree_height(tree->left);
		height_right = binary_tree_height(tree->right);
	}

	if (height_left >= height_right)
		return (height_left + 1);
	return (height_right + 1);
}

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
		size = binary_tree_size(tree->left);
		size = binary_tree_size(tree->right);
	}
	return (size + 1);
}

/**
* _pow_recursion - main fonction that hat returns the value
* of x raised to the power of y.
* @x: number to calculate the power of
* @y: the power of x
* Return: power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_tree_is_perfect - function that check
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: 1
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, supposed_size, su_siz;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	supposed_size = _pow_recursion(2, height);
	su_siz = supposed_size - 1;

	if (size == su_siz)
		return (1);
	return (0);
}
