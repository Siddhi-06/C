#include<stdio.h>
#include<stdlib.h>

// Structre declaration
struct node
{
    int data;               
    struct node *next;      
};

int main()
{
    // Static memory allopcation
    struct node obj;

    // Dynamic memory allocation
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    obj.data = 11;     
    obj.next = NULL;

    ptr -> data = 11;       
    ptr -> next = NULL;

    return 0;
}
