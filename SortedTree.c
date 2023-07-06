#include <stdio.h>
#include <stdlib.h>
// #include "headerF/SortedTree.h"
#include "headerF/balanceTree.h"
#include "headerF/DataType.h"


int main(){
	Tree *tree = (Tree *)malloc(sizeof(Tree));
	tree->val = 1;
	
	tree->right = (Tree *)malloc(sizeof(Tree));
	tree->right->val = 2;

	tree->right->right = (Tree *)malloc(sizeof(Tree));
	tree->right->val = 3;

	tree->right->right->right = (Tree *)malloc(sizeof(Tree));
	tree->right->right->right->val = 4;

	printf("1 %d\n", tree->val);
	printf("2 %d\n", tree->right->val);
	printf("3 %d\n", tree->right->right->val);

	int bal = checkBalance(tree);

	printf("%d \n", bal);

	return 0;
}
