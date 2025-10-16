#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int arr[n] = {};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int prevP = 0;
    for (int i = 0; i < q; i++){
        int p, x, y;
        cin >> p >> x >> y;
       
        // if (i == 0){
        //     for (int j = 0; j < p; j++){
        //         arr[j] += x;
        //     }
        //     for (int j = p; j < n; j++){
        //         arr[j] += y;
        //     }
        //     for (int i = 0; i < n; i++){
        //         cout << arr[i] << " ";
        //     }
        //     cout << endl;
        // }
        // else{
        //     for (int j = prevP; j < p; j++){
        //         arr[j] += x;
        //     }
        //     for (int j = p; j < n - q; j++){
        //         arr[j] += y;
        //     }
        //     for (int i = 0; i < n; i++){
        //         cout << arr[i] << " ";
        //     }
        //     cout << endl;
        //     cout << prevP << " " << p << endl;
        // }
        // prevP = p;
        // int prev = p;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }





}