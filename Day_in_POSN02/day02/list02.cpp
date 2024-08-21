#include<iostream>
using namespace std;

// struct Node{
//     int data;
//     struct Node *next;
// }

struct Node1{
    int data1;
    int data2;
    struct Node1 *next;
};

void putf(struct Node1 **head, int data3, int data4){
    struct Node1 *newNode = new Node1;
    newNode -> data1 = data3;
    newNode -> data2 = data4;
    newNode -> next = (*head);
    (*head) = newNode;
}

void displayList(struct Node1 *node){
    while(node != NULL){
        cout << "data1: " << node -> data1 << "\ndata2: " << node -> data2 << '\n' << endl;
        node = node -> next;
    }

}

void app(struct Node1 **a, int data5, int data6){
    struct Node1 *newNode = new Node1;  // make empty node
    struct Node1 *last = *a;

    //struct

    newNode -> data1 = data5;
    newNode -> data2 = data6;
    newNode -> next = NULL;

    // if list = NULL
    if(*a == NULL){
        *a = newNode;
        return;
    }

    // is not last
    while(last -> next != NULL){
        last = last -> next;    // a = next a ????
    }
    last -> next = newNode;     //next a = newNode
    return;

    
}

int main(){
    struct Node1 *head = NULL;

    app(&head, 100, 22);
    putf(&head, 10, 44);
    displayList(head);

}