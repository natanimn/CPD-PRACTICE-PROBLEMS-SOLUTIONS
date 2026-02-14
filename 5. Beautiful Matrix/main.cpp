#include <iostream>

int getDistance(int matrix[5][5]) {
    int x = 2, y = 2;
    int distance = 0;

    for (int i=0; i < 5; i++) {
        for (int j=0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                if (i > y) distance += (i - y);
                else distance += (y - i);

                if (j > x) distance += (j - x);
                else distance += (x - j);
                break;
            }
        }
    }
    return distance;
}

int main() {

    int matrix[5][5];
    for (auto & i : matrix) {
        for (int & j : i) {
            std::cin >> j;
        }
    }
    std::cout << getDistance(matrix);

    return 0;
}