#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DataType.h"
#define arrSize(x)  (sizeof(x) / sizeof((x)[0]))


//creates array
//takes in a values 
//this value is the size of the array 
//returns the created and specified array
int *CreateArray(int size){
    int *array = (int *)malloc(size * sizeof(int));
    
    for(int i = 0; i < size; i++){
        printf("give me input:"); 
        scanf("%d", &array[i]);
        printf("array val %i, %d\n", i, array[i]);
    }
    
    return array;
}

//adds value to the end of the array
//takes in two values
//the array and the number added to the end
//returns the edited array
int *Add(int *arr, int num, int size){
    arr = (int *)realloc(arr, size+1);
    arr[size+1] = num;
    return arr;
}

//removes item from array
//takes in three values
//the array position to be removed and the size
int *removeArr(int *arr, int pos, int size){
    for(int i = pos+1; i < size; i++){
        arr[i-1] = arr[i];
    }
    
    arr = (int*)realloc(arr, size-1);
    return arr;
}

//prints array
//gets in two values, the array and its size
void printArr(int *arr, int size){
    //if size is zero its not an array its a null value
    if(size == 0){
        //and so it gets real value
        size = arrSize(arr);
    }

    //goes through array and prints each value
    for(int i = 0; i < size; i++){
        printf("%ith item: %d\n", i, arr[i]);
    }
}

//swaps out two items
int* swap(int *arr, int pos1, int pos2){
    int temp2;
    int temp1;

    //getss the values of the two items
    temp1 = arr[pos1];
    temp2 = arr[pos2];

    //sswaps out the values
    arr[pos1] = temp2;
    arr[pos2] = temp1;
}

//sorts array
int *sortArr(int* arr, int size){
    int temp;
    
    for (int i = 0; i < size; i++) {     
        for (int j = i+1; j < size; j++) {     
           if(arr[i] > arr[j]) {    
               temp = arr[i];    
               arr[i] = arr[j];    
               arr[j] = temp;    
           }     
        }     
    }    
}

int* ListToArr(List *list, int size){
    int i = 0;
    List *temp = list;
    int* arr = (int*)malloc(sizeof(int)*size);

    while(i < size){
        arr[i] = temp->val;
        temp = temp->Next;
        i++;
    }

    return arr; 
}
