#include <bits/stdc++.h>
using namespace std;

int main(){
    // int n;
    // cin >> n;
    // int Rare[100000] = {};
    // int Bad[100000] = {};
    // int Common[100000] = {};
    // int temp[100000] = {};

    // int countOfRabbit[100000] = {};
    
    // int numberOfRabit;
    // string typeOfCarrot;
    // int tempOfCarrot;
    // for (int i = 0; i < n * 3; i ++){

    //     cin >> numberOfRabit >> typeOfCarrot >> tempOfCarrot;
    //     // cout << numberOfRabit << typeOfCarrot << tempOfCarrot << endl;
    //     if (typeOfCarrot == "Bad") Bad[numberOfRabit - 1] += 1;
    //     // cout << Bad[numberOfRabit - 1] << endl;
    //     else if (typeOfCarrot == "Common") Common[numberOfRabit - 1] += 1;
    //     else if (typeOfCarrot == "Rare") Rare[numberOfRabit - 1] += 1;

    //     // cout << Bad[numberOfRabit] << " " << Common[numberOfRabit] << " " << Rare[numberOfRabit] << " " << endl;
        
    //     temp[numberOfRabit - 1] += tempOfCarrot;
    //     countOfRabbit[numberOfRabit]++;
    //     // cout << "ss" << endl;
    //     // if ((Bad[numberOfRabit] != 0 || Common[numberOfRabit] != 0 || Rare[numberOfRabit] != 0) && countOfRabbit[numberOfRabit] == 3){
    //     //     countOfRabbit[numberOfRabit] = 0;
    //     //     cout << "Number : " << numberOfRabit+1 << " *-";
    //     //     if (Rare[numberOfRabit] >= 2 || (Rare[numberOfRabit] == 1 && Common[numberOfRabit] == 2)){
    //     //         cout << "Rare carrot soup";
    //     //     }
    //     //     else if (Common[numberOfRabit] == 3 || (Rare[numberOfRabit] == 1 && Common[numberOfRabit] == 1 && Bad[numberOfRabit] == 1)){
    //     //         cout << "Common carrot soup";
    //     //     }
    //     //     else if (Bad[numberOfRabit] >= 2 || (Bad[numberOfRabit] == 1 && Common[numberOfRabit] == 2)){
    //     //         cout << "Bad carrot soup";
    //     //     }
    //     //     cout << "-* Temp : " << temp[numberOfRabit] << endl;

    //     // }
    // }
    // // cout << n;
    // // cout << materialOfSoup[0]["Bad"];
    
    // for (int i = 0; i < 10005; i++){
    //     // cout << Bad[i] << " " << Common[i] << " " << Rare[i] << " " << endl;
    //     // cout << temp[i] << endl;
    //     if (Bad[i] != 0 || Common[i] != 0 || Rare[i] != 0){
    //         cout << "Number : " << i+1 << " *-";
    //         if (Rare[i] >= 2 || (Rare[i] == 1 && Common[i] == 2)){
    //             cout << "Rare carrot soup";
    //         }
    //         else if (Common[i] == 3 || (Rare[i] == 1 && Common[i] == 1 && Bad[i] == 1)){
    //             cout << "Common carrot soup";
    //         }
    //         else if (Bad[i] >= 2 || (Bad[i] == 1 && Common[i] == 2)){
    //             cout << "Bad carrot soup";
    //         }
    //         cout << "-* Temp : " << temp[i] << endl;

    //     }
    // }


    vector<pair<int,string>> rabbit[10004];
    vector<pair<int,string>> rabbit_soup[10004];
    int n;
    cin >> n;
    for (int i = 0; i < n * 3; i++){
        int rabbit_num;
        string type_carrot;
        int temp;
        cin >> rabbit_num >> type_carrot >> temp;
        rabbit[rabbit_num].push_back({temp,type_carrot});
        if (rabbit[rabbit_num].size() == 3){
            int temp_sum = 0;
            int rare = 0;
            int common = 0;
            int bad = 0;
            for (int j = 0; j < 3; j++){
                temp_sum += rabbit[rabbit_num][i].first;
                string type = rabbit[rabbit_num][j].second;
                if (type == "Rare") rare++;
                else if (type == "Common") common++;
                else if (type == "Bad") bad++;
            }
            string soup_type;
            if (rare >= 2 || (rare == 1 && common == 2)){
                soup_type = "Rare carrot soup";
            }
            else if (common == 3 || (rare == 1 && common == 1 && bad == 1)){
                soup_type = "Common carrot soup";
            }
            else if (bad >= 2 || (bad == 1 && common == 2)){
                soup_type = "Bad carrot soup";
            }
            rabbit_soup[rabbit_num].push_back({temp_sum, soup_type});
            rebbit[rabbit_num].clear;
        }
    }

    for (int i = 1; i <= 10000; i++){
        if (rabbit_soup[i].size() == 0) continue;
        for (auto x : rebbit_soup[i]){
            cout << "Number : " << i << " *-" << x.second << "-* Temp : " << x.first << endl;
        }
    }

    return 0;
}