#include"list.h"

#include<stdio.h>
#include<stdlib.h>


int main()
{
    list *L;
    L = list_create();
    datatype data[10];
    printf("输入10个数给链表赋值:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&data[i]);
        list_insert_locate(L,i,&data[i]);
    }
    list_display(L);
    printf("请输入插入的数据位置(从0开始)和大小：");
    int local, e1;
    scanf("%d %d",&local , &e1);
    list_insert_locate(L,local,&e1);
    list_display(L);
    printf("请输入删除的数据大小：");
    int e2;
    scanf("%d" ,&e2);
    list_delete(L,&e2);
    list_display(L);
    list_destroy(L);
    return 0;
}