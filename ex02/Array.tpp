#include "Array.hpp"

template <typename T>
Array<T>::Array() : elements(NULL), int_size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : elements(new T[n]()), int_size(n) {}

template <typename T>
Array<T>::Array(const Array &other) : elements(new T[other.int_size]), int_size(other.int_size) {
	for (unsigned int i = 0; i < int_size; ++i) {
		elements[i] = other.elements[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] elements;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this != &other) 
	{
		delete[] elements;
		int_size = other.int_size;
		elements = new T[int_size];
		for (unsigned int i = 0; i < int_size; ++i) 
		{
			elements[i] = other.elements[i];
		}
	return *this;
	}
}

template <typename T>
T &Array<T>::operator[](unsigned int index) {
	if (index >= int_size) {
		throw std::out_of_range("Index out of bounds");
	}
	return elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
	if (index >= int_size) {
		throw std::out_of_range("Index out of bounds");
	}
	return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return int_size;
}

