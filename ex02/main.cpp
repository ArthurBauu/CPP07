#include "Array.hpp"


int main() {

    //creating Array of int of size 5
    std::cout << "Creating Array of int of size 5" << std::endl;
    Array<int> arr(5);
    arr[0] = 10;
    std::cout << "arr[0]: " << arr[0] << std::endl;
    std::cout << "Size: " << arr.getSize() << std::endl;

    //testing out of bounds
    std::cout << "\nTesting out of bounds" << std::endl;
    try {
        arr[10] = 1;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    // Testing other things
    // std::cout << "\nTesting out of bounds" << std::endl;
    // try {
    //     arr[4] = 1;
    //     std::cout << arr[4] << std::endl;
    // } catch (std::exception &e) {
    //     std::cout << "Exception: " << e.what() << std::endl;
    // }

    // Testing copy constructor
    std::cout << "\nTesting copy constructor" << std::endl;
    Array<int> copy = arr;
	std::cout << "copy[0]: " << copy[0] << std::endl;
    std::cout << "Modifying copy[0] to 20" << std::endl;
    copy[0] = 20;
    std::cout << "arr[0]: " << arr[0] << " copy[0]: " << copy[0] << std::endl;
    return 0;
}