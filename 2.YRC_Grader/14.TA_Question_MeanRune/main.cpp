#include <bits/stdc++.h>
using namespace std;

string str= "";
string mem[30];

string MoonRune (int n){
    if (!mem[n].empty()){
        str = str + mem[n];
        return str;
    }
    if (n == 1){
        str = str + char(1);
    }
    else{
        MoonRune(n - 1);
        str = str + char(n);
        MoonRune(n - 1);
    }
    mem[n] = str;
    return str;
}

int main (){
    int n;
    cin >> n;

    int numberOfQuestion;
    cin >> numberOfQuestion;

    string rune = MoonRune(n);

    for (int i = 0; i < numberOfQuestion; i ++){
        int l,r,x;
        int count = 0;
        cin >> l >> r >> x;
        for (int j = l; j < r; j ++){
            if (rune[j] == (char)x){
                count ++;
            }
        }
        cout << count << endl;
    }


}