#include "BigNumCalc.h"

list<int> BigNumCalc::buildBigNum(string numString){
    list<int> res;

    for(auto i:numString){
        res.push_back((int)(i-'0'));
    }

    return res;
}

list<int> BigNumCalc::add(list<int> num1, list<int> num2){
    list<int> res;

    int carry = 0;
    int val1, val2, sum;

    while(!num1.empty() || !num2.empty()){
        val1 = 0;
        val2 = 0;
        if(!num1.empty()){
            val1 = num1.back();
            num1.pop_back();
        }
        if(!num2.empty()){
            val2 = num2.back();
            num2.pop_back();
        }

        sum = val1 + val2 + carry;

        res.push_front(sum%10);
        carry = sum/10; 
    }
    if(carry){res.push_front(carry);}

    return res;
}


list<int> BigNumCalc::sub(list<int> num1, list<int> num2){
    list<int> res;

    int carry = 0;
    int val1, val2, subtract;

    while(!num1.empty() || !num2.empty()){
        val1 = 0;
        val2 = 0;

        if(!num1.empty()){
            val1 = num1.back();
            num1.pop_back();
        }
        if(!num2.empty()){
            val2 = num2.back();
            num2.pop_back();
        }

        subtract = val1-val2-carry;
        if(subtract < 0){
            res.push_front(subtract + 10);
            carry = 1;
        } else{
            res.push_front(subtract);
            carry = 0;
        }
    }

    if(res.front() == 0){res.pop_front();}

    return res;
}


list<int> BigNumCalc::mul(list<int> num1, list<int> num2){
    list<int> res = buildBigNum("0");
    list<int> copy;
    int carry = 0;
    int dig1, dig2, product;
    while(!num2.empty()){

        list<int> currRes;
        carry = 0;
        copy = num1;
        dig2 = num2.front();

        num2.pop_front();

        while(!copy.empty()){
            dig1 = copy.back();

            copy.pop_back();

            product = dig1 * dig2 + carry;
            currRes.push_front(product % 10);

            carry = product/10;
        }

        if(carry){
            currRes.push_front(carry);
        }


        for(auto i = num2.begin(); i != num2.end(); i++){
            currRes.push_back(0);
        }

        res = add(res, currRes);

        

    }
    
    return res;
}