#include <stdio.h>
#include <stdlib.h>
#include "headerF/List.h"
#include "headerF/DataType.h"

int main(){
    List *list = NULL;
    list = createList(5);
    printList(list);
    int lemgth = getLength(list);
    printf("\nlength: %d\n\n", lemgth);

    insertAtStart(&list, 45);
    printList(list);

    insertAtEnd(&list, 46);
    printList(list);

    swapNodes(&list, 0, 2);
    printList(list);

    int arr[5] = {1, 2, 3, 4, 5};
    List *exArr = ArrToList(arr, 5);
    printList(exArr);
}