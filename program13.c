// Program to display 5 times Hello on screen

#include<stdio.h>

// Demonstration of ITERATION

void Display()              // Defination
{
    int iCnt = 0;

    for( iCnt = 1;  iCnt<=5 ;  iCnt++)
    {
            printf("Hello\n");      
    }
}

int main()
{
    Display();                  // Function call
    
    return 0;
}

