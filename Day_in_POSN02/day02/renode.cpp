// remove node

#include<iostream>
#include<list>

using namespace std;

struct  Node{
    int data;
    struct Node *next;
};

Node *remove_node(struct Node *head, struct Node *target){
    //struct Node *p = head;
    Node *tempnode = head;
    Node *tnode;
    if(head == NULL) return NULL;
    if(target == head){
        head = head -> next;
        delete tempnode;
        return head;
    }
    if(target -> next == NULL){
        target -> data = NULL;
        delete target;
        return;
    }
    tnode = target;
    tnode -> data -> next = target -> next;
    
    //target -> data = 
}