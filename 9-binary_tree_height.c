#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 * @func: is a pointer to a function to call for each node
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0;
    int height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		height_left += binary_tree_height(tree->left);
		height_right += binary_tree_height(tree->right);
	}
	if (height_left > height_right)
	{
		return (height_left);
	}
	else
		return(height_right);
}

