#include <iostream>
using namespace std;

long poww(long x, long y){
    if (y == 0){
        return 1;
    }
    else{
        return x * poww(x, y - 1);

    }
}