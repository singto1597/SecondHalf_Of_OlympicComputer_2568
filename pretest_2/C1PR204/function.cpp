#include <iostream>
#include <string>
using namespace std;

struct node{
    string Slayer;
    node *next;
};

node *head = nullptr;

node* createNode(const string &Slayer){
    node *newNode = new node();
    newNode -> next = nullptr;
    newNode -> Slayer = Slayer;
    return newNode;
}

void deleteRange(int l,int r){
    node *temp = head;
    node *prev = nullptr;
    for (int i = 0; i < l; i++){
        prev = temp;
        temp = temp -> next;
    }
    for (int i = 0; i < r - l + 1; i ++){
        node *temp2 = temp;
        temp = temp -> next;
        delete temp2;
    }
    if (prev == nullptr) head = temp;
    else prev->next = temp;
}

void shuffle(const string &Slayer,const string &Slayer2){
//เขียนฟังก์ชันในนี้
    if (head == nullptr) return;

    node *last1 = nullptr;
    node *find1 = head;
    while (find1 -> next != nullptr){
        if (find1 -> Slayer == Slayer) break;
        last1 = find1;
        find1 = find1 -> next;
    }
    node *find2 = head;
    while (find2 -> next != nullptr){
        if (find2 -> Slayer == Slayer2) break;
        find2 = find2 -> next;
    }
    if (find1 == head){
        head = find1 -> next;
    }
    if (last1 != nullptr){
        last1 -> next = find1 -> next;
    }
    find1 -> next = find2 -> next;
    find2 -> next = find1;

}

void push(const string &Slayer){
//เขียนฟังก์ชันในนี้
    node *temp = head;
    if (head == nullptr || head -> next == nullptr) return;


    
    // if (temp -> next -> next == nullptr) return;
    if (temp -> Slayer == Slayer) {
        // cout << "sss";
        head = temp -> next;
        temp -> next = temp -> next -> next;
        head -> next = temp;
        // node *tempNextNext = temp -> next -> next;
        // node *tempNext = temp -> next;
        
        // tempNext = temp;
        // temp = tempNextNext;
        return;
    }
    
    while(temp -> next -> next != nullptr && temp -> next -> Slayer != Slayer){
        // cout << "null" << endl;
        temp = temp->next;
    }

    if (temp -> next == nullptr || temp -> next -> next == nullptr) return;


    node *tempNextNext = temp -> next -> next;
    node *tempNext = temp -> next;

    temp -> next = temp -> next -> next;
    tempNext -> next = tempNext -> next -> next;
    tempNextNext -> next = tempNext;


    return;
}


void insert(const string &Slayer){
    node *temp = head;
    if (temp == nullptr){
        // cout << "C";
        node *newNode = createNode(Slayer);
        head = newNode;
        return;
    }   

    while(temp -> next != nullptr){
        // cout << "null" << endl;
        temp = temp->next;
    }
    // cout << temp -> Slayer << endl;
    node *newNode = createNode(Slayer);
    temp -> next = newNode;
    return;
}

void peek(){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->Slayer << ' ';
        temp = temp->next;
    }
    cout << endl;
}
