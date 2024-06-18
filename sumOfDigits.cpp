#include <iostream>
#include <math.h>
#include <string>
using namespace std;


int sumOfDigits(int num){
    if(num/10 == 0){
        return num;
    }

    return num % 10 + sumOfDigits(num/10);
}

string reverseString(string input){
    if(input == ""){
        return "";
    }

    return input[input.length()-1] + reverseString(input.substr(0, input.length()-1));

}

bool isPalindrome(string input){
    if(input.length() == 0 || input.length() == 1){
        return true;
    }

    if(input[0] != input[input.length()-1]){
        return false;
    }

    return isPalindrome(input.substr(1, input.length()-2));
}


int main(){
    // int a;
    // std::cout << "Enter number: ";
    // std::cin >> a;

    // std::cout << sumOfDigits(a) << std::endl;
    std::cout << reverseString("Balls") << std::endl;
    std::cout << isPalindrome("racecar") << std::endl;
}

