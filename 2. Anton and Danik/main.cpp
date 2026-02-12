#include <iostream>

constexpr char ANTON = 'A';
constexpr char DANIK = 'D';
constexpr int HUNDRED_K = 100000;

int main() {
    int played_games;
    do {
        std::cout << "Enter played games: ";
        std::cin >> played_games;
    } while (played_games < 1 || played_games > HUNDRED_K);

    std::string played_game_winners;
    int danik_wins = 0;
    int anton_wins = 0;

    std::cout << "Enter played game winner: ";
    std::cin >> played_game_winners;

    for (const char winner: played_game_winners) {
        if (winner == ANTON) anton_wins++;
        else if (winner == DANIK) danik_wins++;
    }
    if (anton_wins > danik_wins) std::cout << "Anton";
    else if (danik_wins > anton_wins) std::cout << "Danik";
    else std::cout << "Friendship";
}