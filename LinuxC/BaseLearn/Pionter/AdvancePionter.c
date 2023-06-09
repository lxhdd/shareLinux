//
// Created by root on 4/17/23.
//
#include <stdio.h>
#include<stdlib.h>

void PrintStringArray(char **str,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%s",str[i]);
    }
}
void PrintTwoArray(int (*num)[3],int LineSize)
{
    int i,j;
    for(i=0;i<LineSize;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",*(*(num+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    char *str[] = {"hello"," ","world","\n"};
    PrintStringArray(str,sizeof(str)/sizeof(*str));
    int a[2][3] = {1,2,3,4,5,6};
    int (*num)[3] = a;
    PrintTwoArray(num,2);

    return 0;
}

