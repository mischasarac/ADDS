#include "BigNumCalc.h"

int main(){
    BigNumCalc a;

    std::list<int> num1 = a.buildBigNum("1000000000000000000000000");
    std::list<int> num2 = a.buildBigNum("20000");

    std::list<int> res = a.sub(num1,num2);

    for(auto i:res){
        std::cout << i;
    }
    std::cout << std::endl;

    return 0;
}