#ifndef VECT_ITER_H
#define VECT_ITER_H

#include "Vect2.h"

class VectIterator {
private:
    Vect* pv;
    int curr_index;

public:
    VectIterator(Vect& v) : curr_index(0), pv(&v) {}
    int& operator()();
};

int& VectIterator::operator()() {
    if (curr_index == pv->size)
        curr_index = 0;
    return (pv->p[curr_index++]);
}

#endif // VECT_ITER_H

