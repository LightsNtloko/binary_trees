#include "binary_trees.h"

/**
 * binary_tree_height - The function that measures the height of a binary tree
 * @tree: The pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0. The Height of
 * a tree is defined as the number of edges on the longest path from the root
 * to a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}