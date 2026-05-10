#include <iostream>

int age;

int main() {
    std::cout << "Please enter your age: ";
    std::cin >> age;
    
    if (age >= 120) {
        std::cout << "You are too old!";
    }
    else if (age >= 18) {
        std::cout << "Welcome the the Site!";
    }
    else {
        std::cout << "You are not old enough";
    }
}