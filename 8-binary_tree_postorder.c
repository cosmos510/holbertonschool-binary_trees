#include "binary_trees.h"
/**
 * binary_tree_postorder - function that goes through using in-order traversal.
 * tree using postorder traversal
 * @tree: a pointer to the node root node of the tree to traverse
 * @func: is a pointer to a function to call for each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int n))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
