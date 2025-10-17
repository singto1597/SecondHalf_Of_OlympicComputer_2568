#include <bits/stdc++.h>
using namespace std;


int main(){
    int numberOfAll, numberOfNeed;
    cin >> numberOfAll >> numberOfNeed;

    string name[numberOfAll] = {};
    int thaiVode[numberOfAll], interVote[numberOfAll], liveVode[numberOfAll];
    int allVode[numberOfAll] = {};
    int allThaiVode = 0;
    int allInterVode = 0;
    for (int i = 0 ; i < numberOfAll; i++){
        cin >> name[i] >> thaiVode[i] >> interVote[i] >> liveVode[i];
        allVode[i] = thaiVode[i] + interVote[i] + liveVode[i];
        allThaiVode += thaiVode[i];
        allInterVode += interVote[i];
    }

    int sumeryOfScore[numberOfAll] = {};

    tuple<string, int, int, int, int, int> nameAndAllScore[numberOfAll];

    for (int i = 0 ; i < numberOfAll; i++){
        sumeryOfScore[i] = ((double(thaiVode[i]) / double(allThaiVode)) * double(allVode[i])) / 2 + ((double(interVote[i]) / double(allInterVode)) * double(allVode[i])) / 2;
        // cout << sumeryOfScore[i] << endl;
        get<0> (nameAndAllScore[i]) = name[i];
        get<1> (nameAndAllScore[i]) = sumeryOfScore[i];
        get<2> (nameAndAllScore[i]) = liveVode[i];
        get<3> (nameAndAllScore[i]) = thaiVode[i];
        get<4> (nameAndAllScore[i]) = interVote[i];
    }

    for (int i = 0; i < numberOfAll; i++){
        for (int j = 0; j < numberOfAll - 1; j++){
            if (get<1> (nameAndAllScore[j]) < get<1> (nameAndAllScore[j+1])){
                swap(nameAndAllScore[j], nameAndAllScore[j+1]);
            }
        }
    }
    int sumOfScore = 0; 
    for (int i = 0; i < numberOfNeed; i ++) sumOfScore += get<1> (nameAndAllScore[i]);
    if (sumOfScore % get<1> (nameAndAllScore[0]) == 0){
        for (int i = 0; i < numberOfAll; i++){
            for (int j = 0; j < numberOfAll - 1; j++){
                if (get<2> (nameAndAllScore[j]) < get<2> (nameAndAllScore[j+1])){
                    swap(nameAndAllScore[j], nameAndAllScore[j+1]);
                }
            }
        }

    }
    sumOfScore = 0;
    for (int i = 0; i < numberOfNeed; i ++) sumOfScore += get<2> (nameAndAllScore[i]);
    if (sumOfScore % get<2> (nameAndAllScore[0]) == 0){
        for (int i = 0; i < numberOfAll; i++){
            for (int j = 0; j < numberOfAll - 1; j++){
                if (get<3> (nameAndAllScore[j]) < get<3> (nameAndAllScore[j+1])){
                    swap(nameAndAllScore[j], nameAndAllScore[j+1]);
                }
            }
        }
    }

    sumOfScore = 0;
    for (int i = 0; i < numberOfNeed; i ++) sumOfScore += get<3> (nameAndAllScore[i]);
    if (sumOfScore % get<3> (nameAndAllScore[0]) == 0){
        for (int i = 0; i < numberOfAll; i++){
            for (int j = 0; j < numberOfAll - 1; j++){
                if (get<4> (nameAndAllScore[j]) < get<4> (nameAndAllScore[j+1])){
                    swap(nameAndAllScore[j], nameAndAllScore[j+1]);
                }
            }
        }
    }

    
    for (int i = 0; i < numberOfNeed; i++){

        cout << get<0> (nameAndAllScore[i]) << " ";
        cout << get<1> (nameAndAllScore[i]) << " ";
        // cout << get<2> (nameAndAllScore[i]) << " ";
        // cout << get<3> (nameAndAllScore[i]) << " ";
        // cout << get<4> (nameAndAllScore[i]) << " ";
        
        cout << endl;
    }


    // **BACKUP**

    
    

    return 0;
}