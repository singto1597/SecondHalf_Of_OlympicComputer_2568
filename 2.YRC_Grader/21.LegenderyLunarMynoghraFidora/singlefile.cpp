#include <iostream>
#include <string>

using namespace std;

struct node{
    string Codename;
    int InternalEnergy;
    node *next = NULL;
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
//เขียนฟังก์ชันในนี้
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

void showSpy(){
    node *temp = head;
    while(temp != nullptr){
        cout << temp->Codename << ' ';
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Add("Sakiko",100);
    Add("Uika",127);
    Add("Sato",50);
    Add("Gin",7);
    showSpy();
    // Kill("Sato");
    // Kill("Bourbon");
    // showSpy();
    // MoveToFirst(113);
    // showSpy();
    // MoveToLast("Sakiko");
    // showSpy();
    // FindAvailable(100);
}