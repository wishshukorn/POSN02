//preinpro

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* newnode(int key){
    node* temp = new node;
    temp -> data = key;
    temp -> left = temp -> right = NULL;
    return temp;
}

node* insert(node* node, int key){
    if(node == NULL){
        return newnode(key);
    }
    if(key < node -> data){                     // เลขน้อยกว่า
        node -> left = insert(node -> left, key);
    }else if(key > node -> data){               // เลขมากกว่า
        node -> right = insert(node -> right, key);
    }
    return node;                                // เลขซ้ำ
}

node* pree(node* node){
    if(node != NULL){
        std::cout << node -> data << " ";
        pree(node -> left);
        pree(node -> right);
    }
}

node* inn(node* node){
    if(node != NULL){
        inn(node -> left);
        std::cout << node -> data << " ";
        inn(node -> right);
    }
}

node* postt(node* node){
    if(node != NULL){
        postt(node -> left);
        postt(node -> right);
        cout << node -> data << " ";
    }
}

int main(){
    node* treee = NULL;
    treee = insert(treee, 10);
    treee = insert(treee,8);
    treee = insert(treee,2);
    treee = insert(treee,4);
    treee = insert(treee,3);
    treee = insert(treee,15);
    treee = insert(treee,26);
    treee = insert(treee,30);
    treee = insert(treee,17);
    treee = insert(treee,6);
    
    cout << "Pre-order transal:\n";
    pree(treee);
    cout << "\nIn-order transal:\n";
    inn(treee);
    cout << "\nPost-order transal:\n";
    postt(treee);
    

}