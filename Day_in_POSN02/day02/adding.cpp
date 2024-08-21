#include<bits/stdc++.h>
using namespace std;

struct Node1{
    int data;
    int up;
    struct Node *next;
};

struct Node2{
    int data;
    int up;
    struct Node *next;
};

void show(list<int> g){
	list<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}



// forward_list <pair<int, int>> flist1 = {{5, 2}, {4, 1}, {2, 0}};
// forward_list <pair<int, int>> flist2 = {{-5, 1}, {-5, 0}};

// forward_list <int> flist1 = {5, 2, 4, 1, 2, 0};
// forward_list <int> flist2 = {-5, 1, -5, 0};

void pushb1(struct Node1 **head, int data1, int data2){     // &head
    struct Node1 *newNode = new Node1;
    newNode->data = data1;
    newNode->up = data2;
    newNode->next = NULL;
}

void pushb2(struct Node2 **head, int data1, int data2){     // &head
    struct Node2 *newNode = new Node2;
    newNode->data = data1;
    newNode->up = data2;
    newNode->next = NULL;
}

int main(){
    struct Node1 *head = NULL;
    struct Node1 *newNode1 = new Node1;

    struct Node2 *head = NULL;
    struct Node2 *newNode2 = new Node2;

    pushb1(&head, 5, 2);
    pushb1(&head, 4, 1);
    pushb1(&head, 2, 0);

    pushb2(&head, -5, 1);
    pushb2(&head, -5, 0);

    show(&newNode1);

    //if(newNode1->up == newNode2->up)


    
}