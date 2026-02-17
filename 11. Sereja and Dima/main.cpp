#include <iostream>
#include <vector>

constexpr int SEREJA = -1;
constexpr int DIMA = 0;

int main() {
    int s_point = 0;
    int d_point = 0;
    int turn = SEREJA;
    std::vector<int> vector;
    int n, x;

    std::cin >> n;
    for (int i=0; i < n; i++) {
        std::cin >> x;
        vector.push_back(x);
    }
    int left = 0, right = vector.size() - 1;

    while (left <= right) {
        if (vector[right] > vector[left]) {
            x = vector[right];
            right --;
        } else {
            x = vector[left];
            left++;
        }
        if (turn == SEREJA) s_point+=x;
        else d_point += x;
        turn = ~turn;
    }
    std::cout << s_point << " " << d_point;
    return 0;
}