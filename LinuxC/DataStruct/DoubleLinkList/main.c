//
// Created by root on 4/14/23.
//
#include "dlist.h"

#include<stdio.h>
#include<stdlib.h>

int main()
{
    DList *L = dlist_created();
    datatype data[10];
    printf("请输入10个数为链表赋值:");
    int i;
    for(i=0;i<sizeof(data)/sizeof(*data);i++)
    {
        scanf("%d",&data[i]);
        dlist_insert_locate(L,i+1,&data[i]);
    }
    dlist_display(L);
    printf("请输入插入的数据位置和大小：");
    int local,e1;
    scanf("%d %d",&local,&e1);
    dlist_insert_locate(L,local,&e1);
    dlist_display(L);
    printf("输入要删除的数：");
    int e2;
    scanf("%d",&e2);
    dlist_delete(L,&e2);
    dlist_display(L);
    exit(0);
}
