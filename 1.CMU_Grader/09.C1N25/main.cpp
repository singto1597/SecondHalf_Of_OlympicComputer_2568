#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    if (n < 3 || n > 100){
        cout << "Invalid" << endl;
        return 0;
    }
    vector<int> array(n);
    int minNumber = 10000000;
    double median;
    int maxNumber = -10000000;

    for (int i = 0; i < n; i++){
        cin >> array[i];
        if (array[i] > maxNumber){
            maxNumber = array[i];
        }
        if (array[i] < minNumber){
            minNumber = array[i];
        }
    }
    sort(array.begin(), array.end());
    if (n % 2 == 0){
        median = double(array[n/2] + array[n/2 - 1]) / 2;
    }
    else{
        median = array[n/2];
    }
    cout << minNumber << endl;
    cout << maxNumber << endl;
    if (array[n/2] + array[n/2 - 1] % 2 == 1){
        cout << fixed << setprecision(2) << median << endl;
        
    }
    
    else{
        cout << median << endl;
    }
}