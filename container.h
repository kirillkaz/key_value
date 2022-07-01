#include <iostream>
#include <vector>
#ifndef KEY_VALUE_CONTAINER_H
#define KEY_VALUE_CONTAINER_H

template<typename T>

class container {

    std::vector<T> valueArr;

    std::vector<std::string> keyArr;


    int keyIndex(std::string key){
        for (int i =0;i<this->keyArr.size();i++) if (key == this->keyArr[i]) return i;
        return -1;
    }

    int valIndex(std::string val){
        for (int i =0;i<this->valueArr.size();i++) if (val == this->valueArrArr[i]) return i;
        return -1;
    }

    T& getVal(std::string key){
        if (keyIndex(key) != -1) return valueArr[(keyIndex(key))];
        else{
            T some;
            this->valueArr.push_back(some);
            this->keyArr.push_back(key);
            return valueArr[keyIndex(key)];
        }
    }
public:

    T& operator[](std::string key){
        return getVal(key);
    }

    const T& operator[](std::string key) const{
        return getVal(key);
    }
};

#endif //KEY_VALUE_CONTAINER_H

