#include <iostream>
#include <algorithm>

int main() {
    int attempt;
    do {
        std::cout << "Enter number of attempts: ";
        std::cin >> attempt;
    } while (attempt < 1 || attempt > 1000);

    int solved = 0;
    int attempts[3];

    for (int i=0; i < attempt; i++) {
        std::cout << "["<< i + 1 << "]. " << "Enter (Separate by space): ";
        std::cin >> attempts[0] >> attempts[1] >> attempts[2];
        if (std::count(std::begin(attempts), std::end(attempts), 1) >= 2) solved++;
    }
    std::cout << "Solved: " << solved;
}