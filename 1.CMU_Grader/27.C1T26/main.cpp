#include <bits/stdc++.h>

using namespace std;

int lengthOfString;
string result;
string baseInput;
set<string> setOfInfo;

void findSubString(int number){
    if (number == lengthOfString){

    }
    else{
        result.push_back(baseInput[number]);
        setOfInfo.insert(result);
    }
}

int main(){
    cin >> lengthOfString;
    cin >> baseInput;
}