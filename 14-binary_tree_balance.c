#include "binary_trees.h"

size_t binary_tree_h(const binary_tree_t *tree);
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
		return (binary_tree_h(tree->left) - binary_tree_h(tree->right));

	return (0);
}

/**
 * binary_tree_h - Custom Height.
 * @tree: A pointer to the root node.
 *
 * Return: If tree is NULL, your function must return 0
 *         else return height.
 */
size_t binary_tree_h(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_h(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_h(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
