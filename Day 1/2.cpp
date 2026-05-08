#include <iostream>

int main() {
    double price = 599;
    double discount = 50;

    double final_price = discount/100 * price;
    std::cout << "Your total is " << final_price;
}