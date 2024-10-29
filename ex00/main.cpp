#include "easyfind.hpp"


int main() {
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    // Find normal number
    try {
        std::cout << "Found_5: " << *easyfind(numbers, 5) << std::endl;
        std::cout << "Found_1: " << *easyfind(numbers, 1) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Find not exist number
    try {
        std::cout << "Found_6: " << *easyfind(numbers, 6) << std::endl;
        std::cout << "Found_-1: " << *easyfind(numbers, -1) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    // Find empty vector
    std::vector<int> empty;
    try {
        std::cout << "Found_1: " << *easyfind(empty, 1) << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}