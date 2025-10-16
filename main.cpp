

// #define ใช้ using
// #define ชื่อนำเข้า namespace
// #define พื้นฐาน std
// #define จำนวนเต็ม int
// #define ฟังชั่นหลัก main
// #define ส่งข้อมูลออกเป็นแบบตัวอักษร cout
// #define รับค่าข้อมูลเป็นแบบตัวอักษร cin
// #define คืนค่ากลับ return
// #define ตัวเลข number
// #define เว้นบรรทัด endl
// #define เซมิโคลอน ;






// #include <bits/stdc++.h>
// ใช้ ชื่อนำเข้า พื้นฐาน;


// จำนวนเต็ม ฟังชั่นหลัก(){
//     จำนวนเต็ม ตัวเลข เซมิโคลอน
//     ส่งข้อมูลออกเป็นแบบตัวอักษร << "Please Input Your Number: " เซมิโคลอน

//     รับค่าข้อมูลเป็นแบบตัวอักษร >> ตัวเลข เซมิโคลอน
//     ส่งข้อมูลออกเป็นแบบตัวอักษร << "Your Number Is: " << ตัวเลข << เว้นบรรทัด เซมิโคลอน

//     คืนค่ากลับ 0 เซมิโคลอน
// }




#include <bits/stdc++.h>
using namespace std;

// struct node {
//     int number;
//     node *poiterOfNext;
// };

int main(){
    // node *head = new node();
    // head -> number = 20;
    // head -> poiterOfNext = NULL;

    // node *second = new node();
    // second -> number = 22;
    // second -> poiterOfNext = NULL;

    // head -> poiterOfNext = second;

    // cout << head->number << " <- " << second->number << endl;

    long long sumery = 1;
    for (int i = 1; i <= 222; i++){
        sumery = (sumery * 7) % 10;
    }
    cout << sumery << endl;

}