/*
    sort.cpp

    Sorting functions
*/

#include "sort.hpp"

// sort the entire vector in place in ascending order
void sort(std::vector<int>& v) {

    if (v.size() < 2)
        return;

    if (v[0] > v[1]) {
        auto t = v[0];
        v[0] = v[1];
        v[1] = t;
    }

    if (v.size() < 3)
        return;

    if (v[1] > v[2]) {
        auto t = v[1];
        v[1] = v[2];
        v[2] = t;
    }

    if (v[0] > v[1]) {
        auto t = v[0];
        v[0] = v[1];
        v[1] = t;
    }
}
