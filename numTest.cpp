#include "BigNumCalc.h"

int main(){
    bigNumCalc a;

    list<int> num1 = a.buildBigNum("1000000000000000000000000");
    list<int> num2 = a.buildBigNum("20000");

    list<int> res = a.sub(num1,num2);

    for(auto i:res){
        cout << i;
    }
    cout << endl;

    return 0;
}