#include "Reverser.h"
#include <string>
#include <math.h>

std::string Reverser::reverseString(std::string str){
    if(str.size() == 1){ return str; }
    return str[str.length() - 1] + reverseString(str.substr(0,str.length()-1));
}


int Reverser::reverseDigit(int num){
    if(num < 0){return -1;}
    if(num / 10 == 0){ return num; }
    return  (num % 10) * pow(10,int(log10(num))) + reverseDigit(num / 10);
}