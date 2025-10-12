#include <bits/stdc++.h>
using namespace std;

int main (){
    string message;
    cin >> message;
    if (isalpha((message[0])) || isalpha((message[1]))){
        cout << "000" << endl;
    }
    else{
        cout << stoi(message) + 20 << endl;
    }
    


}