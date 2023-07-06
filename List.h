#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "DataType.h"

//creates a list
List *createList(int size){
    List *head = NULL;
    List *p = NULL;
    List *temp = NULL;
    
    for(int i = 0; i < size; i++){
        //create individual node (isolated)
        temp = (List*)malloc(sizeof(List));
        printf("%ith element: ", i);
        //gets valuess for isolated list
        scanf("%d", &(temp->val));
        temp->Next = NULL;

        //if the first node is empt turn it into temp
        if(head == NULL){
            head = temp;
        } //otherwise make the next node 
        else{
            p = head;
            while(p->Next != NULL){
                p = p->Next;
            }
            p->Next = temp;
        }
    }

    return head;
    free(head);
    free(p);
    free(temp);
}

int getLength(List* list){
    int i = 0;

    while(list != NULL){
        list = list->Next;
        i++;
    }

    return i;
}

//prtins the list to terminal
void printList(List *list){
    int i = 1;

    //debugging
    printf("wrking maybbe \n");

    //goes through list
    while(list != NULL){
        usleep(100000);
        printf("%ith element: %d \n", i, list->val);
        list = list->Next;
        i = i+1;
    }
}

//sorts linked list
List *sort(List *list){
    List* sorted = NULL;

}

List *AddFront(List *head, int new){
    List *temp;
    temp->val = new;
    temp->Next = head;
    return temp;
    free(temp);
}

void swapNodes(List **list, int pos1, int pos2){
    List *temp = *list;
    List **headref = &temp;
    int *val1, *val2, val3, val4;

    if(pos1 < pos2){
        for(int i = 0; i < pos1; i++){
            temp = temp->Next;
        }
        val1 = &temp->val;
        for (int i = 0; i < pos2-pos1; i++){
            temp = temp->Next;
        }
        val2 = &temp->val;
        
        val3 = *val1;
        val4 = *val2;

        *val1 = val4;
        *val2 = val3;
    
        return;
    }
    else if(pos1 > pos2){
        for(int i = 0; i < pos2; i++){
            temp = temp->Next;
        }
        val1 = &temp->val;
        for (int i = 0; i < pos1-pos2; i++){
            if(temp->Next == NULL){
                break;
            }
            temp = temp->Next;
        }
        val2 = &temp->val;
        
        val3 = *val1;
        val4 = *val2;

        *val1 = val4;
        *val2 = val3;
        
        return;
    }
} //val1 stays the same

//inserts at start
void insertAtStart(List **list, int val){
    //makes the new node
    List *temp = (List *)malloc(sizeof(List));
   
    //inserts calues including the ->Next ass the start of the list
    temp->val = val;
    temp->Next = *list;

    //replacesss the memoryy value of *list with the contents of temp
    *list = temp;
    return;

    /* free(temp); */ //can you free this shit? i hope so 
}


//inserts node at end
void insertAtEnd(List **list, int val){
    //alloc nodes
    List *new = (List *)malloc(sizeof(List));
    List *last = *list;
    
    //setup new node (independent of list rn)
    new->val = val;
    new->Next = NULL;
    
    //make sure list not empty
    if(list == NULL){
        printf("list empty");  
        *list = new;
        insertAtEnd(list, val);
        return;    
    }

    //go through list
    while(last->Next != NULL)
        last = last->Next;
    
    //return list after added in the end
    last->Next = new;
    return;
}

List *ArrToList(int *arr, int length){
    List *list = (List *)malloc(sizeof(List));
    List **headref = &list;

    for(int i = 1; i < length; i++){
        insertAtEnd(headref, arr[i]);
    }

    printf("fuck you\n");
    list->val = arr[0];
    return *headref;
}

List *BinaryTreeToList(Tree *tree){
    while(1){
        
    }
}