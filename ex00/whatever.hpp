#pragma once

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
    return (a < b) ? a : b; // si égales, retourne b
}

template <typename T>
T const &max(T const &a, T const &b)
{
    return (a > b) ? a : b; // si égales, retourne b
}

template<typename T>
void test(const std::string &name, T a, T b) {
    std::cout << "--- Testing " << name << " ---" << std::endl;
    std::cout << "Initial: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
}


