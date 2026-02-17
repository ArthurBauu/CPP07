#pragma once
#include <cstddef>
#include <iostream>

template <typename T>
class Array {
	private:
		T* elements;
		unsigned int int_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &other);
		~Array();
		Array &operator=(const Array &other);
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;
};


#include "Array.tpp"
