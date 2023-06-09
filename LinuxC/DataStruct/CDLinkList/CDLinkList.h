//
// Created by root on 4/19/23.
//

#ifndef PSF_CDLINKLIST_H
#define PSF_CDLINKLIST_H
typedef int datatype;
typedef struct CDLNode
{
    struct CDLNode *prev;
    struct CDNode *next;
    datatype data;
}CDLNode,CDLinkList;

CDLinkList *cdlist_create();
int cdlist_insert_locate(CDLinkList *l,int i,datatype *e);
int cdlist_delete_locate(CDLinkList *l,int i,datatype *e);
int cdlist_delete(CDLinkList *l,int i,datatype *e);
void cdlist_display(CDLinkList *l);
void cdlist_destroy(CDLinkList *l);



#endif //PSF_CDLINKLIST_H
