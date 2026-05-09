#include <iostream>

void pass() {
    std::cout << "Welcome User!";
    std::cout << "===== Terminal Banking App =====" << '\n';
    std::cout << "Press 1 to check balance" << '\n';
    std::cout << "Press 2 to Deposit Money" << '\n';
    std::cout << "Press 3 to WithDay Money" << '\n';
    std::cout << "Press 4 to View Last Transcation" << '\n';
    std::cout << "Press 5 to Exit" << '\n';
}

void actions(double amt, int num, double balance, double dep, double wm, std::string trans) {
    do {
        std::cout << '\n' << "Please enter your choice: ";
        std::cin >> num;
        
        if (num == 1) {
            std::cout << "Your Balance Is: " << balance;
        }
        else if (num == 2) {
            std::cout << "How much money do you want to deposit?: ";
            std::cin >> dep;
            balance = balance + dep;
            std::cout << "New balance is: " << balance << '\n';
            trans = "deposited ";
            amt = dep;
        }
        else if (num  == 3) {
            std::cout << "How much money do you want to withdraw?: ";
            std::cin >> wm;
            balance = balance - wm;
            std::cout << "Your new balance is: " << balance << '\n';
            trans = "Withdrew ";
            amt = wm;
        }
        else if (num == 4) {
            std::cout << "Your last transaction was: " << trans << amt << '\n';
        }
        else if (num == 5) {
            std::cout << "Exited the program" << '\n';
            std::exit(0);
        }
        else {
            std::cout << "Please enter a number between 1-5 and not a string." << '\n';
        }
    }while (num != 5);
}

int main() {
    int pin = 1234;
    int pincode;
    double amt;
    int num;
    double balance = 0;
    double dep;
    double wm;
    std::string trans;

    std::cout << "Please Enter your Pin: ";
    std::cin >> pincode;
    if (pincode == pin) {
        pass();
        actions(amt, num, balance, dep, wm, trans);
    }
    else {
        std::cout << "Incorrect pincode.";
    }
    return 0;
}
