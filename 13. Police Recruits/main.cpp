#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    int a;
    std::vector<int> vector;

    for (int i=0; i<n; i++) {
        std::cin >> a;
        vector.push_back(a);
    }

    int untreated = std::count(vector.begin(), vector.end(), -1);
    int num_police = 0;

    for (const auto vec: vector) {
        if (vec == -1) {
            if (num_police > 0) {
                untreated --;
                num_police--;
            }
        } else
            num_police+=vec;
    }
    std::cout << untreated;
    return 0;
}