#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - function that goes through a binary tree
 * using post-order traversal
 *
 * @func: pointer to a function to call for each node
 * @tree:  pointer to the root node of the tree to traverse. The
 * value in the node must be passed as a parameter to this function.
 *
 * Return: Nothing. if tree/func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
