#include <bits/stdc++.h>
using namespace std;

int main (){
    int hourIn;
    int minutesIn;
    int hourOut;
    int minutesOut;

    cin >> hourIn >> minutesIn;
    cin >> hourOut >> minutesOut;
    int allMinutesInFromZero = hourIn * 60 + minutesIn;
    int allMinutesOutFromZero = hourOut * 60 + minutesOut;

    int price = 0;
    
    if (allMinutesOutFromZero - allMinutesInFromZero > 6 * 60){
        price = 200;
    }
    else if (allMinutesOutFromZero - allMinutesInFromZero > 3 * 60 && allMinutesOutFromZero - allMinutesInFromZero <= 6 * 60){
        if ((allMinutesOutFromZero - allMinutesInFromZero) % 60 != 0){
            price += ((allMinutesOutFromZero - allMinutesInFromZero) / 60 + 1) * 20;

        }
        else{
            price += ((allMinutesOutFromZero - allMinutesInFromZero) / 60) * 20;
        }
    }
    else if (allMinutesOutFromZero - allMinutesInFromZero > 15 && allMinutesOutFromZero - allMinutesInFromZero <= 3 * 60){
        if ((allMinutesOutFromZero - allMinutesInFromZero) % 60 != 0){
            price += ((allMinutesOutFromZero - allMinutesInFromZero) / 60 + 1) * 10;

        }
        else{
            price += ((allMinutesOutFromZero - allMinutesInFromZero) / 60) * 10;
        }
    }
    else if (allMinutesOutFromZero - allMinutesInFromZero <= 15){
        price = 0;
    }


    cout << price << endl;


}