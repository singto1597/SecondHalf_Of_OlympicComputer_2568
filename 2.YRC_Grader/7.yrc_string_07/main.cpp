#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string stadium;
    cin >> stadium;
    string stadiumReverse = stadium;
    reverse(stadiumReverse.begin(), stadiumReverse.end());
    if (stadium == stadiumReverse) {
        cout << "palindrome" << endl;
    } else {
        cout << "not palindrome" << endl;
    }

    return 0;
}