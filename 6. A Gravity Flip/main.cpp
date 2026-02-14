#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::vector<int> vector;
    std::cin >> n;

    int x;
    for (int i=0; i < n; i++) {
        std::cin >> x;
        vector.push_back(x);
    }
    std::sort(vector.begin(), vector.end());

    for (auto vec: vector) {
        std::cout << vec << " ";
    }

    return 0;
}