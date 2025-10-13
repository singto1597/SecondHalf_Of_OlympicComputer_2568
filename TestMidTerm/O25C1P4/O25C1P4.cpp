#include <bits/stdc++.h>
using namespace std;

int main(){
    char command;
    cin >> command;

    int numberOfDirectionOfA = 0;
    int positionOfARow = 0;
    int positionOfAColum = 0;
    cin >> positionOfARow >> positionOfAColum;
    cin >> numberOfDirectionOfA;
    int numberOfTimeA[numberOfDirectionOfA] = {};
    int durationOfTimeA[numberOfDirectionOfA] = {};
    for (int i = 0; i < numberOfDirectionOfA; i++){
        cin >> durationOfTimeA[i] >> numberOfTimeA[i];
    }

    int numberOfDirectionOfB = 0;
    int positionOfBRow = 0;
    int positionOfBColum = 0;
    cin >> positionOfBRow >> positionOfBColum;
    cin >> numberOfDirectionOfB;
    int numberOfTimeB[numberOfDirectionOfB] = {};
    int durationOfTimeB[numberOfDirectionOfB] = {};
    for (int i = 0; i < numberOfDirectionOfB; i++){
        cin >> durationOfTimeB[i] >> numberOfTimeB[i];
    }

    int numberOfTreasure = 0;
    cin >> numberOfTreasure;
    int rowOfTreasure[numberOfTreasure] = {};
    int columOfTreasure[numberOfTreasure] = {};
    int valueOfTreasure[numberOfTreasure] = {};
    for (int i = 0; i < numberOfTreasure; i++){
        cin >> rowOfTreasure[i] >> columOfTreasure[i] >> valueOfTreasure[i];
    }

    for (int j = 0; j < numberOfDirectionOfA)
    for (int i = 0; i < numberOfTimeA[0]; i++){
        if (durationOfTimeA[0] == 'N'){
            positionOfARow--;
        }
        else if (durationOfTimeA[0] == 'S'){
            positionOfARow++;
        }
        else if (durationOfTimeA[0] == 'W'){
            positionOfAColum--;
        }
        else if (durationOfTimeA[0] == 'E'){
            positionOfAColum++;
        }
    }

}