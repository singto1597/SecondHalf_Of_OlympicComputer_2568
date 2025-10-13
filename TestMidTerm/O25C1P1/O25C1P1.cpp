#include <bits/stdc++.h>
using namespace std;

int main(){
    long long number;
    cin >> number;


    long long maxSumOfAllDigits = -1;
    long long sumOfAllDigits_InOneBase = 0;
    long long number_Buffer = 0;
    long long baseOfMaxSumOfAllDigits = 18;

    for (int i = 2; i <= 16; i++){
        // i = base
        number_Buffer = number;
        while (number_Buffer > 0){
            sumOfAllDigits_InOneBase += (number_Buffer % i);
            //cout << sumOfAllDigits_InOneBase << endl;
            
            number_Buffer /= i;
            // cout << number_Buffer << endl;
        }
        if (sumOfAllDigits_InOneBase > maxSumOfAllDigits){
            maxSumOfAllDigits = sumOfAllDigits_InOneBase;
            // if (i < baseOfMaxSumOfAllDigits){
            baseOfMaxSumOfAllDigits = i;

            // }
        }
        else if (sumOfAllDigits_InOneBase == maxSumOfAllDigits){
            if (i < baseOfMaxSumOfAllDigits){
                baseOfMaxSumOfAllDigits = i;

            }
        }
        // cout << endl;
        sumOfAllDigits_InOneBase = 0;
    }

    cout << maxSumOfAllDigits << " " << baseOfMaxSumOfAllDigits << endl;




}