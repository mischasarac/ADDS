#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){ return 1; }
    // Accounting for truncation if value is not divisible by 2.
    return numCrates % 2 ? numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2+1, loadSize) : numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2, loadSize) ;
}