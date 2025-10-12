#include <iostream>
using namespace std;
int main() {
    string input_string;
    getline(cin, input_string);
    int number = 0, character = 0, spacial = 0;
    for (int i = 0; i < input_string.length(); i++){
        char input = input_string[i];
        int asciiOfInput = (int)input;
        if (asciiOfInput >= 48 && asciiOfInput <= 57) number++;
        else if ((asciiOfInput >= 65 && asciiOfInput <= 90) || (asciiOfInput >= 97 && asciiOfInput <= 122)) character++;
        else spacial++;
    }
    cout << character << " ";
    cout << number << " ";
    cout << spacial << endl;
    
    return 0;
    
}