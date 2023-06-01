#include "binary_trees.h"

/**
 * binary_tree_postorder -This functiong goes through a binary tree
 * 			  using post-order traversal.
 *
 * @tree:is the pointer to the root node of the tree to traverse.
 * @func:is the pointer to a function to call for each node.
 * 	 The value of the node must be passed as a parameter to this
 * 	 function.
 * Return: Void If tree or func is NULL
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || (*func) == NULL)/*Postorder(Left,Right,Root)*/
	{
		return;
	}
	/* first recur on left subtree */
	binary_tree_postorder(tree->left, (*func));
	/* then recur on right subtree */
	binary_tree_postorder(tree->right, (*func));
	/* now deal with the node */
	(*func)(tree->n);
}
