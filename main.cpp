#include "Reverser.h"
#include "Truckloads.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
    Reverser r;
    std::string word;
    int num;

    cout << "Enter a word to be reversed: ";
    cin >> word;

    cout << "Now enter a number to be reversed: ";
    cin >> num;

    cout << r.reverseString(word) << endl;;
    cout << r.reverseDigit(num) << endl;


    Truckloads truck;
    cout << truck.numTrucks(1024,5) << endl;
}