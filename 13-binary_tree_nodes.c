#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree: a pointer to the node root node of the tree to traverse
 * Return: the number of node of the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count_node = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	if (tree->left != NULL)
		count_node +=  binary_tree_nodes(tree->left);
	if (tree->right != NULL)
		count_node +=  binary_tree_nodes(tree->right);

	return (count_node + 1);
}
