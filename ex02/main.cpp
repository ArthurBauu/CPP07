#include "Array.hpp"


int main() {
    Array<int> arr(5);
    arr[0] = 10;
    std::cout << arr[0] << std::endl;
    std::cout << arr.getSize() << std::endl;

    try {
        arr[10] = 1;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    Array<int> copy = arr;
	std::cout << copy[0] << std::endl;
    copy[0] = 20;
    std::cout << arr[0] << " " << copy[0] << std::endl;
    return 0;
}