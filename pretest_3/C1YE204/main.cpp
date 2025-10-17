#include <bits/stdc++.h>
using namespace std;

int good[1005];

int main(){
    int t;
    cin >> t;
    for (int ti = 0; ti < t; ti++){
        int n, k, l, r;
        cin >> n >> k >> l >> r;
        int ans = 0;
        int all = r-l+1;
        for (int i = l; i <= r; i ++){
            if (n % i <= k){
                ans++;
            }
        }
        
        int g = __gcd(ans, all);
        ans /= g;
        all /= g;
        cout << ans << '/' << all << endl;
    }

    return 0;
}