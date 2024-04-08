#include "binary_trees.h"
/**
 * binary_tree_delete -delete an entire tree.
 * @tree: pointer to the root.
 * Return: error - NULL.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
		free(tree);
}
