#include <bits/stdc++.h>

using namespace std;

int lengthOfString;
string result;
string baseInput;
set<string> setOfInfo;

void findSubString(int number){
    if (number == lengthOfString){
        // bool isFalse = false;
        if (!result.empty()){
            int count = 0;
            if (result[0] == '0' && result.size() == 1){
                setOfInfo.insert(result);
            }
            else if (result[0] == '1' && result.size() == 1){
                setOfInfo.insert(result);
            }
            else{
                for (int i = 0; i < result.size() - 1; i++){
                    if (result[i] == result[i + 1] ) count ++;
                }

                if (!result.empty()) {
                    if (count == result.size() - 1) {
                        setOfInfo.insert(string(1, result[0]));
                    } else {
                        setOfInfo.insert(to_string(stoi(result)));
                    }
                }
            
                else{
                    setOfInfo.insert(result);
                }
            }

        }
    }
    else{
        result.push_back(baseInput[number]);
        // setOfInfo.insert(result);

        findSubString(number+1);

        result.pop_back();
        // setOfInfo.insert(result);

        findSubString(number+1);
    }
}

int main(){
    cin >> lengthOfString;
    cin >> baseInput;

    findSubString(0);

    for (auto i : setOfInfo){
        cout << i << endl;
    }

    cout << setOfInfo.size() << endl;
}