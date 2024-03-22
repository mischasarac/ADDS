#ifndef BAGOFHOLDING_H
#define BAGOFHOLDING_H

#include <iostream>
#include <math.h>
#include <vector>
#include <unordered_map>
#include <string>


using namespace std;

class bagOfHolding{
    vector<string> items;

public:
    void addItem(string thing){
        items.push_back(thing);
    }
    void removeItem(string thing){
        for(int i = 0; i < items.size(); i++){
            if(items[i] == thing){
                items.erase(items.begin() + i);
            }
        }
        return;
    }
    string getRand(){
        int randPos = rand() % items.size();
        string returnItem = items[randPos];

        items.erase(items.begin() + randPos);

        return returnItem;
    }
    string extractItem(string item){
        items.erase(items.begin() + items.find(item));
        return item;
    }
};



#endif // BAGOFHOLDING_H
