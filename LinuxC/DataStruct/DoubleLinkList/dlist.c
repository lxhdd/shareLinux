//
// Created by root on 4/14/23.
//
#include "dlist.h"

#include<stdio.h>
#include<stdlib.h>

DList *dlist_created()//创建链表
{
   DList *l = malloc(sizeof(*l));
   if(l == NULL)
       return NULL;
   l->prev = NULL;
   l->next = NULL;
    return l;
}
int dlist_insert_locate(DList *l,int i,datatype *e)//按位插入
{
    if(i < 0)
        return -1;
    DList *dnode  = l , *newdnode;
    int j = 0;
    while(j < i-1 && dnode!=NULL)
    {
        dnode = dnode->next;
        j++;
    }
    if(dnode)
    {
        newdnode = malloc(sizeof( *newdnode));
        if(newdnode == NULL)
            return -2;
        newdnode->data = *e;
        newdnode->next = dnode->next;
        if(dnode->next != NULL)
        {
            dnode->next->prev = newdnode;
        }
        newdnode->prev = dnode;
        dnode->next = newdnode;
        return 0;
    }
    else
    {
        return -3;
    }
}
int dlist_delete_locate(DList *l , int i , datatype *e)//按位删除
{
      if(i < 0)
          return -1;
      DList  *dnode = l , *deletednode;
      int j = 0;
      while(j < i-1 && dnode!=NULL)
      {
          dnode = dnode->next;
          j++;
      }
      if(dnode)
      {
          deletednode = dnode->next;
          if(deletednode == NULL)
              return -2;
          *e = deletednode->data;
          dnode->next = deletednode->next;
          if(dnode != NULL)
          {
              deletednode->next->prev = dnode;
          }
          free(deletednode);
          return 0;
      }
      else
      {
          return -3;
      }
}
int dlist_delete( DList  *l , datatype *e)//按值删除
{
    DList *p = l , *q;
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
        q->next->prev = p;
        free(q);
        q = NULL;
        return 0;
    }
}
int  dlist_isempty(DList *l)//链表判空
{
    if(l->next == NULL)
        return 0;
    return 1;
}
void dlist_display(DList *l)//输出链表
{
    if(dlist_isempty(l) ==0)
        return;
    while(l->next != NULL)
    {
        printf("%d ",l->next->data);
        l = l->next;
    }
    printf("\n");
    return;
}
void dlist_destroy(DList *l)//销毁链表
{
    DList *dnode , *next;
    for(dnode = l->next ; dnode != NULL ; dnode = next)
    {
        next = dnode->next;
    }
    free(dnode);
    return ;
}

