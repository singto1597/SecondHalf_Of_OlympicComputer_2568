#include <bits/stdc++.h>
using namespace std;

int n;
int arr[6];
int mn = 2e9;
void recur(int money, int cnt){
    if (cnt >= mn) return;
    if (money < 0) return;
    if (money == 0){
        mn = min(mn, cnt);
        return;
    }
    for (int i = 0; i < n; i++){
        if (money - arr[i] < 0) continue;
        recur (money - arr[i], cnt+1);
    }
}


int main(){
    int money;
    cin >> n >> money;
    
    for (int i = 0; i < n; i++) cin >> arr[i];
    int cnt = 0;
    while (true){
        int x;
        cin >> x;
        if (x == -1) break;
        money -= arr[x];
        cnt++;
    }
    if (money < 0){
        cout << "OH NO!" << endl;
        return 0;
    }
    if (money == 0){
        cout << cnt;
        return 0;
    }
    recur(money, 0);
    if (mn == 2e9) cout << "OH NO!" << endl;
    else cout << mn << endl;

    return 0;
}