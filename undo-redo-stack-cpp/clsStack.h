#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class clsStack {
private:
    vector<T> _container; 

public:
   
    void push(const T& value) {
        _container.push_back(value);
    }

 
    void pop() {
        if (!empty()) {
            _container.pop_back();
        }
    }


    T top() const {
        if (!empty()) {
            return _container.back();
        }
        throw runtime_error("Stack is empty!");
    }

    
    bool empty() const {
        return _container.empty();
    }

   
    int size() const {
        return _container.size();
    }

  
    void clear() {
        _container.clear();
    }
};