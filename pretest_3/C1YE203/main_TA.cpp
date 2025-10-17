#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool cmb(tuple<string, int, int, int, ll> &a, tuple<string, int, int, int, ll> &b){
    if (get<4>(a) != get<4>(b)) return get<4>(a) > get<4>(b);
    else{
        if (get<3>(a) != get<3>(b)) return get<4>(a) > get<3>(b);
        else {
            if (get<1>(a) != get<1>(b)) return get<1>(a) > get<1>(b);
            else {
                if (get<2>(a) != get<2>(b)) return get<2>(a) > get<2>(b);
                else{
                    return get<0>(a) < get<0>(b);
                }
            }
        }
    }
}

int main(){
    int n,d;
    cin >> n >> d;
    vector <tuple<string, int, int, int, ll>> vec;
    ll sumThai = 0, suminter = 0;
    for (int i = 0; i < n; i++){
        string name;
        int ti, ii, vi;
        cin >> name >> ti >> ii >> vi;
        vec.push_back({name, ti, ii, vi, ti+vi+ii});
        sumThai += ti;
        suminter += ii;
    }
    for (int i = 0; i < n; i++){
        string name = get<0>(vec[i]);
        int thai = get<1>(vec[i]);
        int inter = get<2>(vec[i]);
        int live = get<3>(vec[i]);
        ll sum = get<4>(vec[i]);
        // auto [name, thai, inter, live, sum] = vec[i];
        long double sum2 = double(sum * 0.5) * (thai / (double)sumThai + inter / (double)suminter);
        sum = sum2;
        vec[i] = {name, thai, inter, live, sum};
    }
    sort (vec.begin(), vec.end(), cmb);

    for (int i = 0; i < d; i++){
        if (i >= n) break;
        cout << get<0>(vec[i]) << " " << get<4>(vec[i]) << endl;
    }

    return 0;
}