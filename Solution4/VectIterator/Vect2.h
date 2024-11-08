#ifndef VECT2_H
#define VECT2_H

class Vect {
private:
    int* p;
    int size;
    friend class VectIterator;

public:
    Vect();
    Vect(int n);
    Vect(const Vect& v);
    Vect(const int a[], int n);
    ~Vect();
    Vect operator-() const;
    Vect operator-(const Vect& v) const;
    friend Vect operator+(const Vect& a, const Vect& b);
    friend Vect operator!(const Vect& v);
    int& operator[](int i);
    Vect& operator=(const Vect& v);
};

#endif // VECT2_H

