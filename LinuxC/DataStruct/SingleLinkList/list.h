#ifndef LIST_H
#define LIST_H

typedef int datatype;
typedef struct node{
    datatype data;
    struct node *next;
}list;

list * list_create();//链表创建
int list_insert_locate(list *,int ,datatype *);//按位插入
int list_delete_locate(list *,int ,datatype *);//按位删除
int list_delete(list *l,datatype *e);//按值删除
int list_isempty(list *l);//单链表判空
void list_destroy(list *l);//单链表销毁
void list_display(list *l);//展示链表


#endif
