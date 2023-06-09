#include"list.h"
#include<stdio.h>
#include<stdlib.h>


list * list_create()//链表创建
{
    list *l = malloc(sizeof( * l));
    if(l == NULL)
        return NULL;
    l->next = NULL;
    return l;

}
int list_insert_locate(list *l,int i,datatype *e)//按位插入
{
    list *node = l, *newnode;
    int j = 0;
    if(i < 0)
        return -1;
    while(j < i)
    {
        node = node ->next;
        j++;
    }
    if(node)
    {
        newnode = malloc(sizeof(*newnode));
        if(newnode == NULL)
            return -2;
        newnode->data = *e;
        newnode->next = node->next;
        node->next = newnode;
        return 0;
    }
    else
    {
        return -3;
    }

}
int list_delete_locate(list *l,int i,datatype *e)//按位删除
{
    list *p = l , *q;
    int j = 0;
    if(i < 0)
        return -1;
    while(j < i && p)
    {
        p = p->next;
        j++;
    }
    if(p)
    {
       q = p->next;
       p->next = q->next;
       *e = q->data;
       free(q);
        q = NULL;

        return 0;
    }
    else
    {
        return -2;
    }

}
int list_delete(list *l,datatype *e)//按值删除
{
    list *p = l , *q;
    while(p->next && p->next->data != *e)
    {
        p = p->next;
    }
    if(p->next == NULL)
        return -1;
    else
    {
        q = p->next;
        p->next = q->next;
        free(q);
        q = NULL;
    }
}
int list_isempty(list *l)//单链表判空
{
    if(l->next == NULL)
        return 0;
    return 1;
}
void list_destroy(list *l)//单链表销毁
{
    list *node , *next;
    for(node = l->next ; node != NULL ; node = next)
    {
        next = node->next;
    }
    free(node);
    return ;
}

void list_display(list *l)//展示链表
{
   if(list_isempty(l) ==0)
       return;
   while(l->next != NULL)
   {
       printf("%d ",l->next->data);
       l = l->next;
   }
   printf("\n");
   return;
}
