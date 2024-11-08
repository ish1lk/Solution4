#include "Vect2.h"
#include <iostream>
using namespace std;

// Конструктор по умолчанию
Vect::Vect() {
    size = 10;
    p = new int[size];
    for (int index = 0; index < size; ++index)
        p[index] = 0;
}

// Конструктор с параметром
Vect::Vect(int n) {
    if (n <= 0) {
        cerr << "Invalid array size: " << n << endl;
        exit(1);
    }
    size = n;
    p = new int[size];
    for (int index = 0; index < size; ++index)
        p[index] = 0;
}

// Конструктор копирования
Vect::Vect(const Vect& v) {
    size = v.size;
    p = new int[size];
    for (int i = 0; i < size; ++i)
        p[i] = v.p[i];
}

// Конструктор, принимающий массив
Vect::Vect(const int a[], int n) {
    if (n <= 0) {
        cerr << "Invalid array size: " << n << endl;
        exit(1);
    }
    size = n;
    p = new int[size];
    for (int i = 0; i < size; ++i)
        p[i] = a[i];
}

// Деструктор
Vect::~Vect() {
    delete[] p;
}

// Унарный оператор -
Vect Vect::operator-() const {
    Vect temp(size);
    for (int i = 0; i < size; ++i)
        temp.p[i] = -p[i];
    return temp;
}

// Бинарный оператор -
Vect Vect::operator-(const Vect& v) const {
    int s = (size < v.size) ? size : v.size;
    Vect temp(s);
    if (v.size != size)
        cerr << "Invalid array sizes: " << size << " and " << v.size << endl;
    for (int i = 0; i < s; ++i)
        temp.p[i] = p[i] - v.p[i];
    return temp;
}

// Функция-друг оператор +
Vect operator+(const Vect& a, const Vect& b) {
    int s = (a.size < b.size) ? a.size : b.size;
    Vect sum(s);
    if (a.size != b.size)
        cerr << "Invalid array sizes: " << a.size << " and " << b.size << endl;
    for (int i = 0; i < s; ++i)
        sum.p[i] = a.p[i] + b.p[i];
    return sum;
}

// Функция-друг оператор !
Vect operator!(const Vect& v) {
    Vect temp(v.size);
    for (int i = 0; i < v.size; ++i)
        temp.p[i] = (v.p[i] == 0) ? 1 : 0;
    return temp;
}

// Оператор []
int& Vect::operator[](int i) {
    if (i < 0 || i >= size) {
        cerr << "Invalid array index: " << i << endl;
        exit(1);
    }
    return p[i];
}

// Оператор присваивания =
Vect& Vect::operator=(const Vect& v) {
    if (this == &v)
        return *this;

    delete[] p;
    size = v.size;
    p = new int[size];
    for (int i = 0; i < size; ++i)
        p[i] = v.p[i];
    return *this;
}
