#include <iostream>
using namespace std;

void app(double &balance, int choice) {
    double amount;

    if (choice == 1) {
        cout << "Your balance is " << balance << "\n";
    }
    else if (choice == 2) {
        cout << "Enter amount to be deposited: ";
        cin >> amount;
        balance += amount;
        cout << "Deposited. New balance is " << balance << "\n";
    }
    else if (choice == 3) {
        cout << "Enter amount to be withdrawn: ";
        cin >> amount;

        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Withdrawn. New balance is " << balance << "\n";
        }
    }
    else if (choice == 4) {
        cout << "Exited Program.\n";
    }
    else {
        cout << "Please enter a valid choice (1-4)\n";
    }
}

int main() {
    double balance = 0;
    int choice;

    cout << "===== Terminal Banking App =====\n";
    cout << "1. Check balance\n";
    cout << "2. Deposit amount\n";
    cout << "3. Withdraw amount\n";
    cout << "4. Exit\n";

    do {
        cin >> choice;
        app(balance, choice);
    } while (choice != 4);

    return 0;
}