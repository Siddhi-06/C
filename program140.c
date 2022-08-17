#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];

    int fd = 0;     // File descriptor

    printf("Enter file name to create\n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write \n");
    scanf(" %[^'\n']s",Data);

    fd = creat(Fname,0777);
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;  // Failure
    }

    printf("File is succefully created with FD %d\n",fd);

    write(fd,Data,strlen(Data));

    return 0;
}
