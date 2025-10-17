#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int n;

int findindex(int k){
    //code here
    int *ptr = lower_bound(arr, arr + n, k);
    if (*ptr != k){
        return - 1;
    }
    else{
        return (ptr - arr) + 1;
    }
}

int main(){
    int q;
    cin >> n >> q;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    while(q--){
        int k;
        cin >> k;
        cout << findindex(k) << "\n";
    }
    return 0;
}