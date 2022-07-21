#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: NULL, the function must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == 0 && tree->right == 0)
	{
		return (0);
	}
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
