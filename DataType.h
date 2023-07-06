#ifndef DataStructure_H
#define DataStructure_H

typedef struct List{ 
    int val;
    struct List *Next;
}List;

//so you may be asking whats the difference? i dont know either?

typedef struct DoublyLinked{
   int val;
   struct DoublyLinked *Previous;
   struct DoublyLinked *Next;    
}DoublyLinked;


typedef struct Tree{
    int val;
    struct Tree *right;
    struct Tree *left;
}Tree;

#endif