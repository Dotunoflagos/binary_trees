#include "binary_trees.h"

/**
 * binary_tree_size - that measures the size of a binary tree
 * @tree: pointer node binary tree
 * Return: measures the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	depth += 1 + binary_tree_size(tree->left);
	depth += 1 + binary_tree_size(tree->right);
	return (depth);
}
