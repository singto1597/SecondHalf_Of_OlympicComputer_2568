#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void two(long dec){
    if (dec == 0){
        cout << "0";
    }
    string base2 = "";
    while (dec > 0){
        base2 = to_string(dec % 2) + base2;
        dec /= 2;
    }
    cout << base2;
    
    cout << endl;
}