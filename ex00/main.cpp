#include <iostream>
#include <string>
#include "whatever.hpp"


template<typename T>
void test(const std::string &name, T a, T b) {
    std::cout << "--- Testing " << name << " ---" << std::endl;
    std::cout << "Initial: a = " << a << ", b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
}

int main() {
    // ints
    test<int>("int (2,3)", 2, 3);
    test<int>("int (-5, -5) (equal)", -5, -5);

    // floats
    test<float>("float (3.14, 2.71)", 3.14f, 2.71f);
    test<double>("double (0.0, -0.0) (equal semantics)", 0.0, -0.0);

    // chars
    test<char>("char ('a','z')", 'a', 'z');
    test<char>("char ('x','x') (equal)", 'x', 'x');

    // strings
    test<std::string>("string (\"apple\", \"banana\")", std::string("apple"), std::string("banana"));
    test<std::string>("string (\"same\", \"same\") (equal)", std::string("same"), std::string("same"));

    return 0;
}






