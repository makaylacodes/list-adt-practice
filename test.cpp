#include <iomanip>
#include<iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next; //this is the pointer for the next value in the list

};

//This function will print out all values in the list
void printList(Node* n){ 
    while (n != NULL){
        cout<< n->value << endl;
        n = n->next;
    }
}

//This function will insert new node at start
void insertFront (Node** head, int newValue) {
    Node* newNode = new Node();
    newNode -> value = newValue;
    newNode -> next = *head;
    *head = newNode;
}

//This function will insert new node at end
void insertEnd(Node** head, int newValue){
    //1. prepare a new node
    Node* newNode = new Node();
    newNode -> value = newValue;
    newNode -> next = NULL;

    //2. If linked list is empty, newNode will be head node
    if (*head == NULL){
        *head = newNode;
        return;
    }

    //3. Find the last node
    Node* last = *head;
    while (last -> next != NULL){
        last = last->next;
    }

    //4. Insert newNode after last node
    last->next = newNode;
}


int main (){
    Node* head = new Node();
    Node* second = new Node();
    Node* last = new Node();

    head -> value = 1;
    head ->next = second;
    second -> value =2;
    second -> next = last;
    last -> value = 3;
    last -> next = NULL; 
    insertFront(&head, -1);
    insertFront(&head, -2);

    insertEnd(&head, 4);
    printList(head);
    return 0;
}