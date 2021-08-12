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
void insertFront (Node** head, int newValue) {
    Node* newNode = new Node();
    newNode -> value = newValue;
    newNode -> next = *head;
    *head = newNode;
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
    printList(head);
    return 0;
}