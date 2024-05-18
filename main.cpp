#include "Heap.tpp"
#include <iostream>


int main(){
    Heap<int> heap;
    std::vector<int> values = {2, 3, 4, 5};
    Heap<int> heap2(values);

    for(auto i : heap2.values){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    heap2.insert(1);

    for(auto i : heap2.values){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << heap2.getMin() << std::endl;

    heap2.remove(1);

    for(auto i : heap2.values){
        std::cout << i << " ";
    }
    std::cout << std::endl;

    std::cout << heap2.getMin() << std::endl;

    return 0;
}