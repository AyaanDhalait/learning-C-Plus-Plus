#include <iostream>
using std::cin;


int main() {
    int passc = 1234;
    int pin;

    std::cout << "Please enter your pin: ";
    cin >> pin;

    if (pin == passc) {
        std::cout << "Welcome, Ayaan.";
    }
    else {
        std::cout << "Wrong Password Please try again later";
    }
}