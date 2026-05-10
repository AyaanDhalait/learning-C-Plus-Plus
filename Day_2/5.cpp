#include <iostream>

int main() {
    double num1;
    double num2;

    using std::cin;
    using std::cout;

    cout << "Please enter number 1: ";
    cin >> num1;
    cout << '\n' << "Please enter number 2: ";
    cin >> num2;

    double sum = num1 + num2;
    std::cout << "The Sum of " << num1 << " and " << num2 << " is " << sum;
}