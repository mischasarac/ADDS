#include "item.h"

template<typename T>
void item<T>::addSpecItem(T object){
    holdSpecific[object]++;
}


template<typename T>
T item<T>::removeSpecItem(T object){
    if(holdSpecific[object] == 0){
        return NULL;
    }

    holdSpecific[object]--;
    return object;
}