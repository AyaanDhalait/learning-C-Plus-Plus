#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int player_health = 100;
int enemy_health = 100;
bool game_running = true;

void show_status() {
    cout << "\n====================\n";
    cout << "Your HP: " << player_health << "\n";
    cout << "Enemy HP: " << enemy_health << "\n";
    cout << "====================\n\n";
}

int get_input() {
    int choice;
    cout << "Choose action:\n";
    cout << "1. Attack\n";
    cout << "2. Heal\n";
    cout << "3. Run\n";
    cout << "> ";
    cin >> choice;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 0;
    }

    return choice;
}

void player_turn() {
    int choice = get_input();

    if (choice == 1) {
        int dmg = rand() % 15 + 5;
        enemy_health -= dmg;
        cout << "You attack and deal " << dmg << " damage!\n";
    }
    else if (choice == 2) {
        int heal = rand() % 10 + 5;
        player_health += heal;
        if (player_health > 100) player_health = 100;
        cout << "You heal for " << heal << " HP!\n";
    }
    else if (choice == 3) {
        cout << "You ran away...\n";
        game_running = false;
    }
    else {
        cout << "Invalid choice!\n";
    }
}

void enemy_turn() {
    if (enemy_health <= 0) return;

    int dmg = rand() % 12 + 3;
    player_health -= dmg;

    cout << "Enemy attacks and deals " << dmg << " damage!\n";
}

void check_game_over() {
    if (enemy_health <= 0) {
        cout << "\nYou defeated the enemy!\n";
        game_running = false;
    }

    if (player_health <= 0) {
        cout << "\nYou died... Game Over.\n";
        game_running = false;
    }
}

int main() {
    srand(time(0));

    cout << "=== CLI RPG BATTLE ===\n";

    while (game_running) {
        show_status();
        player_turn();
        check_game_over();

        if (!game_running) break;

        enemy_turn();
        check_game_over();

        cout << "\nPress Enter to continue...";
        cin.ignore();
        cin.get();
    }

    cout << "\nGame Ended.\n";
    return 0;
}