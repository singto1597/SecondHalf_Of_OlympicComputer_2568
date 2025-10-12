#include <bits/stdc++.h>
using namespace std;

int main (){
    string message;
    cin >> message;
    int count[256] = {};

    for (int i = 0; i < message.length(); i ++){
        count[(int)message[i]]++;
    }


// (int)message[i]



    for (int i = 97; i <= 122; i++){
        if (count[i] != 0){
            cout << "(" << (char)i << ":" << count[i] << ")" << endl;
        }
    }
    for (int i = 65; i <= 90; i++){
        if (count[i] != 0){
            cout << "(" << (char)i << ":" << count[i] << ")" << endl;
        }
    }
    


}