#include <iostream>

int main() {
    std::string name;
    int age;

    std::cout << "Hello, World!" << '\n';
    std::cout << "Please enter your name: ";
    std::cin >> name;
    std::cout << "Please enter your age: ";
    std::cin >> age;
    std::cout << "Your name is " << name << '\n';
    std::cout << "You are " << age << " Years old!" << '\n';
    return 0;
}