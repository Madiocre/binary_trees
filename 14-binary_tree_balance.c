#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor.
 * @tree: A pointer to the root node.
 *
 * Return: If tree is NULL, return 0
 *         else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}