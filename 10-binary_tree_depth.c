#include "binary_trees.h"

/**
 * binary_tree_depth - depth of a node in a binary tree
 * @tree:  pointer to the root node
 * Return: Depth value
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (count);
	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}
	return (count);
}
