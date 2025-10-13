#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int numberOfArray;
        cin >> numberOfArray;
        int array[numberOfArray] = {};
        for (int j = 0; j < numberOfArray - 1; j++){
            cin >> array[j];
        }
        int maxDifferent = -1000000;
        int minDifferent = 1000000;

        int firstBadIndex = -1;
        int different = 0;
        int differentNoAbs = 0;
        for (int j = 0; j < numberOfArray - 2; j++){
            different = 0;
            different = abs(array[j] - array[j + 1]);
            differentNoAbs = array[j] - array[j + 1];
            // cout << "j: " << j << endl;
            // cout << "dif: " << different << endl;
            // cout << array[j] << " " << array[j + 1] << endl;
            if (different > maxDifferent){
                maxDifferent = different;
                firstBadIndex = j;
                // cout << firstBadIndex << endl;
            }
            else if (different < minDifferent){
                minDifferent = different;
            }
            // cout << endl;

        }
        if (maxDifferent == minDifferent) {
            //cout << array[numberOfArray - 2] << endl ;
            cout << array[numberOfArray - 2] + different << endl;
        }
        else{
            // cout << "Ans: ";
            if (numberOfArray <= 3){
                cout << array[numberOfArray - 2] - differentNoAbs << endl;
            }
            else{
                cout << (array[firstBadIndex] + array[firstBadIndex + 1]) / 2 << endl;

            }
            // cout << endl;
        }
        
    }


}