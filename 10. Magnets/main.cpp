#include <iostream>
#include <vector>

using string = std::string;
using vector = std::vector<string>;

constexpr string POSITIVE = "10";
constexpr string NEGATIVE = "01";

int main() {
    vector magnets;
    string magnet;
    string magnet_type;
    int group = 0;

    int number;
    std::cin >> number;
    for (int i=0; i < number; i++) {
        std::cin >> magnet;
        magnets.push_back(magnet);
        if (magnet != magnet_type) {
            magnet_type = magnet == POSITIVE? POSITIVE: NEGATIVE;
            group++;
        }
    }

    std::cout << group;
    return 0;
}