#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a tree with .
 * @tree: root node to begin traversal at.
 * @func: function to call 
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	func(tree->n);
	binary_tree_preorder(tree->right, func);
}
