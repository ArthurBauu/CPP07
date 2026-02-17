#pragma once
#include <cstddef>
#include <iostream>

template <typename T, typename F>
void iter(T *array, size_t length, F f) {
	for (size_t i = 0; i < length; ++i) {
		f(array[i]);
	}
}

template <typename T>
void print (T const n) {
	std::cout << n << " ";
}

template <typename T>
void increment (T n) {
	n++;
	std::cout << n << " ";
}

void to_upper(char &c) {
	c = std::toupper(static_cast<unsigned char>(c));
}