#include <bits/stdc++.h>
using namespace std;

int arr[1000000];

int n;

int findindex(int k){
    int *ptr = lower_bound(arr, arr + n, k);
    if (*ptr != k) return - 1;
    else return (ptr - arr) + 1;
}