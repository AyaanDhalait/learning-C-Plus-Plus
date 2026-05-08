#include <iostream>

int main() {
    int age;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    if (age > 150) {
        std::cout << "You are too old for the website!";
    }
    else if (age >= 18) {
        std::cout << "Welcome to the system!";
    }
    else if (age < 18 && age > 0) {
        std::cout << "Sorry, you're too young!";
    }
    else {
        std::cout << "Please enter a valid age";
    }
}