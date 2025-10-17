#include <bits/stdc++.h>
using namespace std;

long long a[1000000] = {};

// long long powerSets = {};

// long long findMax(){
//     findMax(i)
// }

int main(){
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    long long ans = 0;
    long long sum = 0;
    long long cur = 0;
    for (int r = 1; r <= n; r++){
        sum += a[r];
        if (sum - cur > ans){
            ans = sum - cur;
        }
        if (sum < cur){
            cur = sum;
        }
    }



    cout << ans << endl;

    return 0;
}