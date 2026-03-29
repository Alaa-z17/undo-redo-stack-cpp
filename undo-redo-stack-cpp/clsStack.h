#pragma once
#include <iostream>
#include <vector>

template <typename T>
class clsStack {
private:
    std::vector<T> _container; // الحاوية الأساسية لتخزين العناصر

public:
    // إضافة عنصر جديد إلى أعلى الـ Stack
    void push(const T& value) {
        _container.push_back(value);
    }

    // إزالة العنصر الموجود في الأعلى
    void pop() {
        if (!empty()) {
            _container.pop_back();
        }
    }

    // قراءة العنصر الموجود في الأعلى دون حذفه
    T top() const {
        if (!empty()) {
            return _container.back();
        }
        throw std::runtime_error("Stack is empty!");
    }

    // التحقق مما إذا كان الـ Stack فارغاً
    bool empty() const {
        return _container.empty();
    }

    // معرفة عدد العناصر الحالية
    int size() const {
        return _container.size();
    }

    // تفريغ الـ Stack بالكامل
    void clear() {
        _container.clear();
    }
};