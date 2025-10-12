#include <iostream>
using namespace std;

int main(){
    long long x;

    cin >> x;
    x = x * x * x + abs(x);
    cout << x;
}