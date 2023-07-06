#include "DataType.h"
#include <stdio.h>
#include <stdlib.h>

int treeHeight(Tree* tree) {
    if (tree == NULL) {
        return -1;
    }
	int leftHeight = treeHeight(tree->left);
	int rightHeight = treeHeight(tree->right);
	return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
}

int checkBalance(Tree *tree){
	int lh = treeHeight(tree->left);
	int rh = treeHeight(tree->right);

	return lh-rh;
}

void leftRotation(Tree **root){ 
	Tree *temp = *root;
	Tree *child = temp->right;
	
	child->left = temp;
	temp->right = NULL;

	*root = child;

	return;
}

void rightRotation(Tree **root){
	Tree *temp = *root;
	Tree *child = temp->left;
	
	child->right = temp;
	temp->left = NULL;

	*root = child;

	return;
}

