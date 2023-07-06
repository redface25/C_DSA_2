#include "headerF/Array.h"
#include "headerF/List.h"
#include <stdio.h>
#include <stdlib.h>
#include <DataType.h>

int main(){
    // int *arr = malloc(5*sizeof(int));
    // arr = CreateArray(5);
    // printArr(arr, 5);

    List* headRef = createList(3);
    CreateArray(2);

    // free(arr);
    int *tempArr = malloc(sizeof(int)*3);
    tempArr = ListToArr(headRef, getLength(headRef));
    printArr(tempArr, 3);

    int bigDick = 0;

    printf("big dicks\n");
    return 0;
}
