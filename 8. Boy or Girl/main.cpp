#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    std::vector<char> vector;
    std::string string;
    std::cin >> string;

    for (auto str: string) {
        if (std::count(vector.begin(), vector.end(), str) == 0)
            vector.push_back(str);
    }
    if (vector.size() % 2 == 0)
        std::cout << "CHAT WITH HER!";
    else
        std::cout << "IGNORE HIM!";
    return 0;
}