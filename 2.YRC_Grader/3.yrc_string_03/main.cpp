#include <bits/stdc++.h>
using namespace std;

int main (){
    string message;
    getline (cin, message);
    stringstream string_stream(message);
    string token;
    int count = 0;

    while (string_stream >> token){
        count++;
    }
    transform(message.begin(), message.end(), message.begin(), ::toupper);
    cout << message << " " << count << endl;


}