#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};


Node* head = nullptr;


Node* createNode(int data) {
    //Your Code
    Node *newNode = new Node();
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}


void insertFirst(int data) {
    //Your Code
    Node *firstNode = createNode(data);
    firstNode -> next = head;
    head = firstNode;

}


void insertByIndex(int idx,int data) {
    

}



void printList() { 
    Node * temp = head;
    while(temp != NULL) { 
        printf("%d", temp -> data); 
        if(temp -> next != NULL) { 
            printf(" -> "); 
        } 
        temp = temp -> next; 
    } 
    printf("\n"); 
    return ; 
}


int main() {
    insertFirst(9);
    printList();
    insertFirst(19);
    insertFirst(50);
    insertFirst(40);
    insertFirst(90);
    printList();

    return 0;
}