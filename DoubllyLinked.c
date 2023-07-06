#include <stdio.h>
#include <DataType.h>
#include "headerF/DoublyLinked.h"

int main(){
    DoublyLinked *list;
    DoublyLinked *temp;
    AddFront(&temp, 5);
    printf("%d \n", temp->val);
    createDoubleList(&list, 4);
    printDouble(list);
    printListBack(list);
    return 0;
}