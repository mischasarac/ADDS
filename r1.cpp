#include <iostream>
#include <math.h>

using namespace std;

int sum_of_powers(int n){
    // Returning 0 as 0^0 is just zero and is not needed for funcion
    if(n <= 0){
        return 0;
    }

    // returning power + the sum of all previous powers. Tail recursion because called at the end.
    return pow(n,n) + sum_of_powers(n-1);
}
