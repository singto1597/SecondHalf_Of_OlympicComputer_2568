#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int level = 0;
        int power = 0;
        int badStoneRatio = 0;
        int goodStoneRatio = 0;

        int goodStone = 0;
        int badStone = 0;
        
        cin >> level >> power >> badStoneRatio >> goodStoneRatio;
        goodStone += level * power;
        while (goodStone > 0){
           
            power += goodStone;
            badStone += goodStone;
            goodStone -= badStone;

            while(badStone > badStoneRatio){


                badStone -= badStoneRatio;
                goodStone += goodStoneRatio;
                cout << goodStone << " " << badStone << endl;

            }
            // if (badStone > badStoneRatio){
            //     badStone -= badStoneRatio;
            //     goodStone += goodStoneRatio;
            //     cout << goodStone << " " << badStone << endl;
            // }
            cout << power << endl;
            //cout << goodStone << " " << badStone << endl;
            
        }

    }


}