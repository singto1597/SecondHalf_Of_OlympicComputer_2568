#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, q;
    cin >> n >> q;
    long long arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort (arr, arr+n);
    for (int i = 0 ;i < q; i++){
        long long x, y;
        cin >> x >> y;
        long long result = (upper_bound(arr, arr+n, y) - arr) - (lower_bound(arr, arr + n, x) - arr);
        cout << result << endl;
    }

}