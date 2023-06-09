//
// Created by root on 4/14/23.
//

#ifndef PSF_DLIST_H
#define PSF_DLIST_H

typedef int datatype;
typedef struct dnode{
    datatype data;
    struct dnode *prev;
    struct dnode *next;
} DList;

DList *dlist_created();//创建链表
int dlist_insert_locate(DList *l , int i , datatype *e);//按位插入
int dlist_delete_locate(DList *l , int i , datatype *e);//按位删除
int dlist_delete( DList  *l , datatype *e);//按值删除
int dlist_isempty(DList *l);//链表判空
void dlist_display(DList *l);//输出链表
void dlist_destroy(DList *l);//销毁链表



#endif //PSF_DLIST_H
