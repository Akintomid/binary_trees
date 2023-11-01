#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor
 *         0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_le, height_ri;

	if (!tree)
		return (0);

	height_le = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_ri = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_le - height_ri);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_le = 0;
	size_t height_ri = 0;

	if (!tree)
		return (0);

	height_le = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_ri = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_le > height_ri ? height_le : height_ri);
}
