#include "binary_trees.h"

/**
 * binary_tree_node - Creates a tree node
 * @parent: Parent of node
 * @value: value of node
 *
 * Return: new Binary Tree
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *output;

	output = malloc(sizeof(binary_tree_t));
	if (output == NULL)
		return (NULL);
	output->n = value;
	output->parent = parent;
	output->left = NULL;
	output->right = NULL;

	return (output);
}
