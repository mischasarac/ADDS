#include <iostream>
#include <vector>
using namespace std;

int fib(int n){
    static vector<int> fib_val;

    if(n==0 || n==1){
        return n;
    }

    if(fib_val.size() > n-2){
        cout << "found " << n << " at " << fib_val.at(n-2) <<  endl;
        return fib_val.at(n-2);
    }

    int res = fib(n-1) + fib(n-2);

    fib_val.push_back(res);

    return res;
}

int main(){
    fib(5);
    cout << "yo" << endl;
    fib(5);
    return 0;
}
// template <typename T>

