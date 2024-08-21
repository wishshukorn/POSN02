// linked-list making function /* not done */

#include<bits/stdc++.h>
using namespace std;

struct node{
    int info;
    struct node *next=NULL;
};

typedef struct node *NODEPTR;

NODEPTR getnode(void){
    NODEPTR p;
    p=(NODEPTR)malloc(sizeof(struct node));
    return p;
}

void insertafter(NODEPTR p,int x){
    NODEPTR q;
    if(p==NULL)
    {
        printf("void insertion\n");
        exit(1);
    }
    q=getnode();
    q->info=x;
    q->next=p->next;
    p->next=q;
}

void deleteafter(NODEPTR p){
    NODEPTR q;
    if((p==NULL)||(p->next==NULL))
    {
        printf("void deletion\n");
        exit(1);
    }
    q=p->next;
    p->next=q->next;
    free(q);
}

void place(NODEPTR plist,int x)
{
    NODEPTR p,q,h;
    p=NULL;
    for(p=plist;p!=NULL&&x>p->info;p=p->next)
        q=p;
    if(q==NULL){
        h=getnode();
        h->info=x;
        h->next = plist;
        plist=h;
    }
    else
        insertafter(q,x);
}
void putLast(NODEPTR plist,int x)
{
    NODEPTR p,q;
    p=getnode();
    p->info=x;
    p->next=NULL;
    if(plist==NULL)
        plist=p;
    else
    {
        for(q=plist;q->next!=NULL;q=q->next);
        q->next=p;
    }
}
void printlist(NODEPTR p)
{
    while(p!=NULL)
    {
        printf("%d ",p->info);
        p=p->next;
    }
}