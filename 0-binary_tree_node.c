#include "binary_trees.h"
/**
* binary_tree_node - function that creates a binary tree node.
* @parent: is a pointer to the parent node of the node to create.
* @value: is the value to put in the new node
* Return: a pointer to the new node, or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t)); /*solicita memoria*/
	if (new_node == NULL) /*Verifica valor nodo*/
	{
		return (NULL); /*en caso de que este vacio*/
	}
	new_node->n = value;	   /*agrega valor a n*/
	new_node->parent = parent; /* sera el padre del subarbol*/
	new_node->left = NULL;	   /* no tiene hijos por el momento*/
	new_node->right = NULL;	   /* no tiene hijos por el momento*/

	return (new_node);
}
