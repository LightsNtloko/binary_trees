#include <stdio.h>
#include "binary_trees.h"

/**
 * print_spaces - The function that prints spaces for formating
 * @spaces: The number of spaces to print
 */
static void print_spaces(int spaces)
{
	while (spaces > 0)
	{
		printf(" ");
		spaces--;
	}
}

/**
 * print_binary_tree - The function that recursively prints the binary tree
 * @tree: The pointer to the root node of the tree to print
 * @depth: The current depth in the tree for formatting
 */
static void print_binary_tree(const binary_tree_t *tree, int depth)
{
	if (tree == NULL)
	{
		print_spaces(depth * 4);
		printf("~\n");
		return;
	}

	print_binary_tree(tree->right, depth + 1);
	print_spaces(depth * 4);
	printf("%03d\n", tree->n);
	print_binary_tree(tree->left, depth + 1);
}

/**
 * binary_tree_print - The function that prints a binary tree
 * @tree: The pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	print_binary_tree(tree, 0);
}
