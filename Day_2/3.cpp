#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

void calc(int num, double balance, double dep, double withd) {
    if (num == 1) {
        cout << "please enter amount to be deposited: ";
        cin >> dep;
        balance += dep;
    }
    else if (num == 2) {
        cout << "please enter amount to be withdrawn: ";
        cin >> withd;
        balance -= withd;
    }
    else if (num == 3) {
        cout << balance;
    }
    else if (num == 4) {
        cout << "Exited program.";
    }
    else {
        cout << "please enter a valid optionn between 1-4";
    }
}

int main() {
    int num;
    double dep;
    double withd;
    double balance = 0;

    cout << "===== Terminal Calculator App =====" << '\n';
    cout << "Press 1 to deposit" << '\n';
    cout << "Press 2 to withdraw" << '\n';
    cout << "Press 3 to Check balance" << '\n';
    cout << "Press 4 to exit program" << '\n';
    cout << ">";
    cin >> num;
    do {
        calc(num, balance, dep, withd);
    } while (num != 4);


}