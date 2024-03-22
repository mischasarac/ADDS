#include <iostream>
#include <math.h>

int sum_of_powers(int n){
    if(n == 0){
        return 0;
    }

    return pow(n,n) + sum_of_powers(n-1);
}