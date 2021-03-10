#include "binary_trees.h"

/**
* binary_tree_nodes - number of nodes
*@tree: the node to check
*Return: the number of nodes
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is(tree));
}
/**
* is - are u full ?
*@tree: the tree to check if full ?
*Return: full or not ?
*/
int is(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if ((tree->left != NULL && tree->right == NULL))
		return (0);
	if ((tree->left == NULL && tree->right != NULL))
		return (0);
	return (is(tree->left) && is(tree->right));
}
