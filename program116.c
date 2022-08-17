#include<stdio.h>
#include<stdlib.h>

// Structre declaration
struct node
{
    int data;               
    struct node *next;      
};

typedef struct node NODE;

int main()
{
    // Static memory allopcation
    NODE obj;

    // Dynamic memory allocation
    NODE *ptr = (NODE *)malloc(sizeof(NODE));

    obj.data = 11;      
    obj.next = NULL;

    ptr -> data = 11;      
    ptr -> next = NULL;

    return 0;
}
