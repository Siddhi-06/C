#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;           
    struct node *next;  
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    

    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
            
          temp = *head;

          while(temp->next != NULL)
          {
            temp = temp->next;
          }
          temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are : \n");

    while(head != NULL)
    {
        printf("| %d |-> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)
{
    
    PNODE temp = NULL;

    if(*head == NULL)   // LL is empty
    {
        return;
    }
    else        // LL contains atleast one node
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{}

int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);    
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);     

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);

    Display(first);     

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    return 0;
}
