#include <bits/stdc++.h>
using namespace std;

int main (){
    int numberA, numberB;
    cin >> numberA >> numberB;

    int modResult[1000] = {};
    // 125 60
    // 125 = 60 x 2 + 5
    // 60 = 5 x 12 + 0
    int index = 0;
    int biggerNumber = 0;
    int smallerNumber = 0;
    if  (numberA > numberB){
        biggerNumber = numberA;
        smallerNumber = numberB;
    }
    else if (numberA < numberB){
        biggerNumber = numberB;
        smallerNumber = numberA;
    }
    // cout << biggerNumber << " " << smallerNumber;
    int GCD = 0;
    while (1){
        if ((biggerNumber % smallerNumber == 0 && biggerNumber != 0) || numberA == numberB){
            GCD = numberA;
            break;
        }
        modResult[index] = biggerNumber % smallerNumber;
        // cout << modResult[index] << endl;
        biggerNumber = smallerNumber;
        smallerNumber = modResult[index];
        if (modResult[index] == 0) break;
        index++;
    }
    GCD = modResult[index - 1];
    cout << GCD << endl;
}