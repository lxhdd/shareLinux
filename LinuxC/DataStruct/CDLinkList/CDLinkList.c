//
// Created by root on 4/19/23.
//

#include "CDLinkList.h"

#include<stdio.h>
#include<stdlib.h>



CDLinkList *cdlist_create()
{
    CDLinkList *l = malloc(sizeof(*l));
    if(l == NULL)
        return NULL;
    l->prev = l->next = l;
    return l;
}

int cdlist_insert_locate(CDLinkList *l,int i,datatype *e)
{
    CDLinkList *cdnode = l, *newcdnode;

}
int cdlist_delete_locate(CDLinkList *l,int i,datatype *e);
int cdlist_delete(CDLinkList *l,int i,datatype *e);
void cdlist_display(CDLinkList *l);
void cdlist_destroy(CDLinkList *l);
