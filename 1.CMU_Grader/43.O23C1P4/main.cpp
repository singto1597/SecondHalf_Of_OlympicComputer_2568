#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int numberOfString = 0;
        cin >> numberOfString;
        string messageWord[numberOfString];
        for (int j = 0; j < numberOfString; j++){
            cin >> messageWord[j];
        }
        int countOfDifferents = 0;
        bool isFalse = false;
        for (int j = 0; j < numberOfString - 1; j++){
            countOfDifferents = 0;
            if (1 < abs(static_cast<int>(messageWord[j].length()) - static_cast<int>(messageWord[j+1].length()))){
                isFalse = true;
            }
            else if (messageWord[j].length() == messageWord[j+1].length()){
                if (messageWord[j] == messageWord[j+1]){
                    isFalse = true;
                    continue;
                }
                for (int indexOfStr = 0; indexOfStr < min(messageWord[j].length(),messageWord[j+1].length()); indexOfStr++){
                    if (messageWord[j][indexOfStr] != messageWord[j + 1][indexOfStr] ){
                        countOfDifferents++;
                    }
                    
                    
                    // cout << countOfDifferents << endl;
                }
                if (countOfDifferents > 1){
                    isFalse = true;
                }
            }
            else{
                // if (messageWord[j].length() > messageWord[j+1].length()){
                //     for (int indexOfStr = 0; indexOfStr < max(messageWord[j].length(),messageWord[j+1].length()); indexOfStr++){
                //         if (messageWord[j][indexOfStr] != messageWord[j + 1][indexOfStr] ){
                //             countOfDifferents++;
                //         }
                //         else if (messageWord[j][indexOfStr] != messageWord[j + 1][indexOfStr - 1] ){
                //             countOfDifferents--;
                //         }
                        
                        
                //         // cout << countOfDifferents << endl;
                //     }
                // }
                // else if (messageWord[j].length() < messageWord[j+1].length()){
                //     for (int indexOfStr = 0; indexOfStr < max(messageWord[j].length(),messageWord[j+1].length()); indexOfStr++){
                //         if (messageWord[j][indexOfStr] != messageWord[j + 1][indexOfStr] ){
                //             countOfDifferents++;
                //         }
                //         else if (messageWord[j][indexOfStr - 1] != messageWord[j + 1][indexOfStr] ){
                //             countOfDifferents--;
                //         }
                        
                        
                //         // cout << countOfDifferents << endl;
                //     }
                // }
                // if (countOfDifferents == 0){
                //     countOfDifferents += max(messageWord[j].length(),messageWord[j+1].length()) - min(messageWord[j].length(),messageWord[j+1].length());

                // }
                // if (countOfDifferents > 1){
                //     isFalse = true;
                // }
                string longWord, shortWord;
                if (messageWord[j].length() > messageWord[j+1].length()){
                    longWord = messageWord[j];
                    shortWord = messageWord[j+1];
                }
                else{
                    longWord = messageWord[j+1];
                    shortWord = messageWord[j];
                }
                int indexOfStr = 0;
                char *longWordIndexPoiter = &longWord[0];
                char *shortWordIndexPoiter = &shortWord[0];
                while(indexOfStr < longWord.length()){
                    if (*longWordIndexPoiter == *shortWordIndexPoiter){
                        longWordIndexPoiter++;
                        shortWordIndexPoiter++;
                    }
                    else if (*longWordIndexPoiter != *shortWordIndexPoiter){
                        longWordIndexPoiter++;
                    }

                    if (*longWordIndexPoiter != *shortWordIndexPoiter){
                        countOfDifferents++;
                    }

                    if (countOfDifferents > 1){
                        isFalse = true;
                    }
                    indexOfStr++;
                }
            }
            // cout << endl;
            // if (countOfDifferents > 1){
            //         isFalse = true;
            // }
        }
        if (isFalse){
            cout << "F" << endl;
        }
        else{
            cout << "T" << endl;
        }
    }

}