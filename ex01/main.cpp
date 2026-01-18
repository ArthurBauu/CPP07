#include "iter.hpp"
#include <cctype>  // for toupper

void print (const int &n) {
	std::cout << n << " ";
}

void to_upper(char &c) {
	c = std::toupper(static_cast<unsigned char>(c));
}

int main () {
	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::cout << "\nTesting iter with int array:" << std::endl;
	std::cout << "Original array: ";
	iter(array, length, print);
	std::cout << std::endl;


	std::cout << "\nTesting iter with char array to convert to uppercase:" << std::endl;
	std::string message = "Hello, World!";
	size_t msg_length = message.size();
	std::cout << "Original message: " << message << std::endl;
	iter(&message[0], msg_length, to_upper);
	std::cout << "Modified message: " << message << std::endl;


	std::cout << "\nTesting iter with const int array:" << std::endl;
	const int const_array[] = {10, 20, 30};
	size_t const_length = sizeof(const_array) / sizeof(const_array[0]);
	std::cout << "Const array: ";
	iter(const_array, const_length, print);
	std::cout << std::endl;
}