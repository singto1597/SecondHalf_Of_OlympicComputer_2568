#include <iostream>
#include <string>

using namespace std;

struct node{
    string Codename;
    int InternalEnergy;
    node *next;
};

node* createNode(const string &Codename,int InternalEnergy){
    node* newNode = new node;
    newNode->Codename = Codename;
    newNode->InternalEnergy = InternalEnergy;
    newNode -> next = nullptr;
    return newNode;
}

node *head;

void Add(const string &Codename,int InternalEnergy){
    node *newNode = createNode(Codename, InternalEnergy);
    if (head == NULL){
        head = newNode;
        return;
    }

    // *guide*
    // node *temp = head;
    // while(temp -> next != nullptr)temp = temp->next;


    node *cursor = head;
    while (cursor -> next != NULL){
        cursor = cursor -> next;
    }
    cursor -> next = newNode;
}

void Kill(const string &Codename){
    if (head == NULL){
        return;
    }
    if (head -> Codename == Codename){
        head = head -> next;
    }
}

void MoveToFirst(int requirement){
//เขียนฟังก์ชันในนี้
}

void MoveToLast(const string &Codename){
//เขียนฟังก์ชันในนี้
}

void FindAvailable(int requirement){
//เขียนฟังก์ชันในนี้
}
