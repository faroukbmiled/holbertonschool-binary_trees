#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: is a pointer to the node
 * @value: value to store in the new node
 * Return: pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
struct binary_tree_s *right_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->right = parent->right;
	right_node->left = NULL;
	if (parent->right != NULL)
		parent->right->parent = right_node;
	parent->right = right_node;
	return (right_node);
}
