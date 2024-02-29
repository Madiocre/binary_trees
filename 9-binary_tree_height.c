#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;
		if (tree->left) {
			left = 1;
			left += binary_tree_height(tree->left);
		}
		if (tree->right) {
			right = 1;
			right += binary_tree_height(tree->right);
		}
	}
	return (0);
}