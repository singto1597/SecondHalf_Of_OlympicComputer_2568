#include <iostream>
#include <map>
using namespace std;

map<int, int> library; // book_id → count

// ฟังก์ชันเพิ่มหนังสือ
void addBook(int id, int count){
    library[id] += count;
    cout << "1 " << library[id] << endl;
}

// ฟังก์ชันค้นหาหนังสือ
void searchBook(int id){
    //เขียน code ตรงนี้
    if (library.count(id)){
        cout << "1 " << library[id] << endl;

    }
    else{
        cout << "0" << endl;
    }
}

// ฟังก์ชันยืมหนังสือ
void borrowBook(int id, int amount){
    //เขียน code ตรงนี้
    
    if (library[id] - amount >= 0 && library.count(id)){
        library[id] -= amount;
        cout << "1 " << library[id] << endl;

    }
    else{
        cout << "0" << endl;
    }
}

// ฟังก์ชันคืนหนังสือ
void returnBook(int id, int amount){
    //เขียน code ตรงนี้
    if (library.count(id)){
        library[id] += amount;
        cout << "1 " << library[id] << endl;

    }
    else{
        cout << "0" << endl;
    }
}