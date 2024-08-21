// binary node

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* makee(int key){
    node* temp = new node;
    temp -> data = key;
    temp -> left = temp -> right = NULL;
    return temp;
}

node* insertt(node* node, int key){
    if(node==NULL){
        return makee(key);
    }
    else if(key < node -> data){
        node -> left = insertt(node -> left, key);
    }
    else if(key > node ->data){
        node -> right = insertt(node -> right, key);
    }
    return node;
};

void pree(node* node){
    if(node!=NULL){
        cout << node -> data << " ";
        pree(node -> left);
        pree(node -> right);
    }
}

void inn(node* node){
    if(node!=NULL){
        inn(node -> left);
        cout << node -> data << " ";
        inn(node -> right);
    }
}

void postt(node* node){
    if(node!=NULL){
        postt(node -> left);
        postt(node -> right);
        cout << node -> data << " ";
    }
}

int main(){
    node* idk = NULL;
    int a[10] = {10, 8, 2, 4, 3, 15, 26, 30 ,17, 6};
    for(int i=0;i<10;i++){
        idk = insertt(idk, a[i]);
    }
    cout << "pre-order:\n";
    pree(idk);
    cout << "\nin-order:\n";
    inn(idk);
    cout << "\npost-order:\n";
    postt(idk);
}
