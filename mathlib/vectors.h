// vectors.h
#pragma once
#ifndef VECTORS_H
#define VECTORS_H

#include <cmath>
#include <array>

// Templated vector class
template <typename T>
class Vector {
public:
    // Typedefs for vector types
    using vec_t = float;
    using vec3_t = std::array<vec_t, 3>;
    using vec4_t = std::array<vec_t, 4>;
    using vec6_t = std::array<vec_t, 6>;

    // Operator overloads for Vector class
    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(float scalar) const;
    bool operator%(bool vscale) const;

    // Vector functions
    // Snaps vector to grid and returns a snapped value
    int vecSnap(int snap, bool snapped);

    // Snap vector to a grid
    void snapToGrid(vec_t* t, const Vector& v);

    // Reset snap function, returns false
    bool snapReset(vec_t* current, const Vector& v) {
        if (!current) {
            return false;
        }
        snapToGrid(current, v);
        return false;
    }

    // Get vector matrix position (requires an external matrix type, assuming it's defined elsewhere)
    void vecMatrix(const T* matrix, Vector* v) const;

    // Dot product function
    static float dotProduct(const vec3_t& x, const vec3_t& y) {
        return x[0] * y[0] + x[1] * y[1] + x[2] * y[2];
    }

private:
    T data;  // Vector data (assumed for simplification)
};

// Implementation of operators (examples)
template <typename T>
Vector<T> Vector<T>::operator+(const Vector<T>& other) const {
    Vector<T> result;
    result.data = data + other.data;  // Placeholder for actual vector addition logic
    return result;
}

template <typename T>
Vector<T> Vector<T>::operator-(const Vector<T>& other) const {
    Vector<T> result;
    result.data = data - other.data;  // Placeholder for actual vector subtraction logic
    return result;
}

template <typename T>
Vector<T> Vector<T>::operator*(float scalar) const {
    Vector<T> result;
    result.data = data * scalar;  // Placeholder for actual scalar multiplication
    return result;
}

template <typename T>
bool Vector<T>::operator%(bool vscale) const {
    // Implement some boolean operation as required
    return vscale;
}

template <typename T>
int Vector<T>::vecSnap(int snap, bool snapped) {
    // Placeholder logic for vecSnap; implement as needed
    return snap;
}

template <typename T>
void Vector<T>::snapToGrid(vec_t* t, const Vector<T>& v) {
    // Placeholder for snapping to grid
    if (t) {
        *t = std::round(*t);  // Example of rounding
    }
}

template <typename T>
void Vector<T>::vecMatrix(const T* matrix, Vector* v) const {
    // Placeholder for matrix transformation logic
    // Actual implementation would depend on the matrix and vector structure
}

#endif // VECTORS_H
