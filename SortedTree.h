#include <stdio.h>
#include <stdlib.h>
#include "DataType.h"

void addFront(Tree **tree, int val){
    Tree *temp = *tree;
    Tree *end = *tree; 

    if(temp == NULL){
        temp = (Tree *)malloc(sizeof(Tree));
        (*tree)->val = val;
        return;
    }
    while(1){
        //check if empty
        if(temp->val == 0 && val != 0){
            temp->val = val;
        }
        //if less make insertion to the left
        if(val < temp->val){
            if(temp->left == NULL){
                temp->left = (Tree*)malloc(sizeof(Tree));
                temp = temp->left;
                break;
            }
             else{
                temp = temp->left;
            }
        }
        //if more make insertion to the right.
        if(val > temp->val){
            if(temp->right == NULL){
                temp->right = (Tree*)malloc(sizeof(Tree));
                temp = temp->right;
                break;
            }
            else{
                temp = temp->right;
            }
        }
        //equal
        if(val == temp->val){
            temp->count++;
            break;
        }
    }    
    temp->val = val;
}

void makeTree(Tree **tree){
    int size;
    printf("how many nodes do you want");
    scanf("%d", &size);
    for(int i = 0; i > size; i++){
        int val;
        scanf("%d", val);
        addFront(tree, val);
    }
}