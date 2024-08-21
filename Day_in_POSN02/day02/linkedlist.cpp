#include <iostream>
using namespace std;

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

// insert a new node in front of the list
void push_front(struct Node **head, int node_data)
{
    struct Node *newNode = new Node; // create and allocate node
    newNode->data = node_data; // assign data to node
    newNode->next = (*head);  // set next of new node as head
    (*head) = newNode;   // move the head to point to the new node
}

// insert new node after a given node
void insert_after(struct Node *prev_node, int node_data)
{
    if (prev_node == NULL) { // check if the given prev_node is NULL
        cout << "the given previous node is required, cannot be NULL";
        return;
    }
    struct Node *newNode = new Node; // create and allocate new node
    newNode->data = node_data;       // assign data to the node
    newNode->next = prev_node->next; // Make next of new node as next of prev_node
    prev_node->next = newNode;    // move the next of prev_node as new_node
}

/* insert new node at the end of the linked list */
void append(struct Node **head, int node_data)
{
    struct Node *newNode = new Node; // create and allocate node
    struct Node *last = *head;       // used later
    
    newNode->data = node_data;   // assign data to the node
    newNode->next = NULL;
    if (*head == NULL) {  // if list is empty,
        *head = newNode;  // then  new node becomes 1st node
        return;
    }
    // otherwise, traverse till the last node
    while (last->next != NULL)
        last = last->next;
    last->next = newNode;  // Change the next of last node
    return;
}

// delete first node in the linked list
Node *pop_front(struct Node *head)
{
    if (head == NULL)
        return NULL;

    // Move the head pointer to the next node
    Node *tempNode = head;
    head = head->next;
    delete tempNode;

    return head;
}

// delete last node from linked list
Node *pop_last(struct Node *head)
{
    if (head == NULL)
        return NULL;

    if (head->next == NULL) {
        delete head;
        return NULL;
    }

    // first find second last node
    Node *second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    delete (second_last->next); // Delete the last node
    second_last->next = NULL; // set next of second_last to null

    return head;
}

// return the first node with the target value
Node *find(struct Node *head, int val)
{
    struct Node *p = head;
    while(p != NULL && p->data != val)
        p = p->next;

    return p;
}

// Node *remove_node(struct Node *head, struct Node *target)
// {

// }


// display linked list contents
void displayList(struct Node *node)
{
    // traverse the list to display each node
    while (node != NULL) {
        cout << node->data << " -> ";
        node = node->next;
    }

    if (node == NULL)
        cout << "null" << endl << endl;
}

/* main program for linked list*/
int main()
{
    struct Node *head = NULL;  // Create a new linked list

    append(&head, 10);      // Insert 10
    push_front(&head, 20);  // Insert 20 at the beginning
    push_front(&head, 30);  // Insert 30 at the beginning
    append(&head, 40);      // Insert 40 at the end.
    insert_after(head->next, 50); // Insert 50, after 20

    cout << "Final linked list: " << endl;
    displayList(head);

    // delete first node
    head = pop_front(head);
    cout << "Linked list after deleting head node" << endl;
    displayList(head);

    // delete last node
    head = pop_last(head);
    cout << "Linked list after deleting last node" << endl;
        displayList(head);

    cout << "Search for 99" << endl;
    struct Node *p = find(head, 99);

    if (p != NULL)
        cout << "Value search is " << p->data << endl;
    else
        cout << "Can't find the target number." << endl;

    return 0;
}